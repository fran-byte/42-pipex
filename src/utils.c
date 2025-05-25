/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:20:13 by frromero          #+#    #+#             */
/*   Updated: 2025/05/15 19:47:09 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Utility functions for input validation, command parsing, memory
   management, and error handling. */

#include "../inc/pipex.h"

/**
 * @brief Validates the input arguments for the pipex program.
 *
 * @param argc Argument count.
 * @param argv Argument vector.
 *
 * Exits with an error message if arguments are invalid or commands are empty.
 */
void	check_input(int argc, char **argv)
{
	if (argc != 5 || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		write(2, "\nUsage: ./pipex infile \"cmd1\" \"cmd2\" outfile\n\n", 46);
		exit(EXIT_FAILURE);
	}
}

/**
 * @brief Splits a command string into an array of arguments.
 *
 * @param argv Command string (e.g., "ls -l").
 * @return Array of strings representing command and arguments.
 */
char	**get_cmd(char *argv)
{
	char	**cmd;

	cmd = ft_split(argv, ' ');
	return (cmd);
}

/**
 * @brief Frees a NULL-terminated array of strings.
 *
 * @param tab Array to be freed.
 */
void	free_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab == NULL)
		return ;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

/**
 * @brief Displays an error message and exits the program.
 *
 * @param str Error message to print before perror.
 */
void	error(char *str)
{
	write(2, str, ft_strlen(str));
	perror(" ");
	exit(EXIT_FAILURE);
}
