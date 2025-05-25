/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:22:21 by frromero          #+#    #+#             */
/*   Updated: 2025/05/15 20:33:44 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

/**
 * @brief Executes the first command. Redirects input from the given file
 * and output to the pipe's write end.
 *
 * @param fd_pipe File descriptors for the pipe [read, write].
 * @param argv Command-line arguments.
 * @param envp Environment variables.
 */
static void	child_one(int *fd_pipe, char **argv, char **envp)
{
	int		fd_infile;
	char	**cmd;
	char	*path;

	cmd = get_cmd(argv[2]);
	path = get_path(cmd[0], envp);
	fd_infile = open(argv[1], O_RDONLY);
	if (fd_infile < 0)
		error("file Error");
	close(fd_pipe[0]);
	dup2(fd_infile, STDIN_FILENO);
	dup2(fd_pipe[1], STDOUT_FILENO);
	if (!path)
	{
		free_tab(cmd);
		write(2, "Error: Command not found\n", 25);
		exit(EXIT_FAILURE);
	}
	execve(path, cmd, envp);
	error("execve Error");
}

/**
 * @brief Executes the second command. Redirects input from the pipe's read end
 * and output to the specified output file.
 *
 * @param fd_pipe File descriptors for the pipe [read, write].
 * @param argv Command-line arguments.
 * @param envp Environment variables.
 */
static void	child_two(int *fd_pipe, char **argv, char **envp)
{
	int		fd_outfile;
	char	**cmd;
	char	*path;

	cmd = get_cmd(argv[3]);
	path = get_path(cmd[0], envp);
	fd_outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_outfile < 0)
		error("file Error");
	close(fd_pipe[1]);
	dup2(fd_outfile, STDOUT_FILENO);
	dup2(fd_pipe[0], STDIN_FILENO);
	if (!path)
	{
		free_tab(cmd);
		write(2, "Error: Command not found\n", 25);
		exit(EXIT_FAILURE);
	}
	execve(path, cmd, envp);
	error("execve Error");
}

/**
 * @brief Waits for both child processes to terminate and checks their exit
 * status.
 *
 * @param pid1 PID of the first child.
 * @param pid2 PID of the second child.
 */
static void	wait_for_children(pid_t pid1, pid_t pid2)
{
	int	sta;
	int	status1;
	int	status2;

	waitpid(pid1, &sta, 0);
	if (WIFEXITED(sta)) /* Check exit status */
	{
		status1 = WEXITSTATUS(sta);
		if (status1 != 0)
			exit(EXIT_FAILURE);
	}
	waitpid(pid2, &sta, 0);
	if (WIFEXITED(sta))
	{
		status2 = WEXITSTATUS(sta);
		if (status2 != 0)
			exit(EXIT_FAILURE);
	}
}

/**
 * @brief Main logic for the pipex program. Creates a pipe and forks two child
 * processes to handle the two commands. The first child takes input from a file
 * and writes to the pipe. The second child reads from the pipe and writes to an
 * output file.
 *
 * The parent process is responsible for setting up the pipe and managing both
 * children.
 *
 * @param argv Command-line arguments: ./pipex infile "cmd1" "cmd2" outfile
 * @param envp Environment variables used to locate command binaries.
 */
static void	pipex(char **argv, char **envp)
{
	pid_t	pid1;
	pid_t	pid2;

	int fd_pipe[2]; /* (fd) for the pipe: [0] = read end, [1] = write end */
	if (pipe(fd_pipe) < 0) /* pipe: between the two child processes*/
		error("pipe Error");
	pid1 = fork(); /* 1º fork: creates child process to execute 1º CMD*/
	if (pid1 < 0)
		error("fork Error");
	if (pid1 == 0)
		child_one(fd_pipe, argv, envp); /* Child process executes cmd1*/
	pid2 = fork();                     
		/* 2º fork: creates child process to execute 2º CMD*/
	if (pid2 < 0)
		error("fork Error");
	if (pid2 == 0)
		child_two(fd_pipe, argv, envp); /* Child process executes cmd2*/
	close(fd_pipe[0]);
	close(fd_pipe[1]);
	wait_for_children(pid1, pid2);
}

/**
 * @brief Entry point of the program. Validates input and calls the pipex logic.
 *
 * @param argc Argument count.
 * @param argv Argument vector.
 * @param envp Environment variables.
 * @return int Always returns 0.
 */
int	main(int argc, char **argv, char **envp)
{
	check_input(argc, argv);
	pipex(argv, envp);
	return (0);
}
