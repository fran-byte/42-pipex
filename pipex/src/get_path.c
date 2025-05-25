/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 21:10:41 by frromero          #+#    #+#             */
/*   Updated: 2025/05/15 19:46:17 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

/**
 * @brief Retrieves the PATH environment variable from envp.
 *
 * @param envp Environment variables.
 * @return Pointer to the PATH value (after "PATH="), or NULL if not found.
 */
static char	*find_path_env(char **envp)
{
	while (*envp)
	{
		if (ft_strnstr(*envp, "PATH=", 5))
			return (*envp + 5);
		envp++;
	}
	return (NULL);
}

/**
 * @brief Splits the PATH environment variable into individual directories.
 *
 * @param path_env The PATH variable string.
 * @return Array of directory strings, NULL on failure.
 */
static char	**split_path_directories(char *path_env)
{
	return (ft_split(path_env, ':'));
}

/**
 * @brief Constructs a potential full path to a command by joining a directory
 * with the command.
 *
 * @param directory A single directory from PATH.
 * @param cmd The command name (e.g., "ls").
 * @return Full path to the executable if accessible, NULL otherwise.
 */
static char	*construct_cmd_path(char *directory, char *cmd)
{
	char	*full_path;
	char	*command_path;

	full_path = ft_strjoin(directory, "/");
	if (!full_path)
		return (NULL);
	command_path = ft_strjoin(full_path, cmd);
	free(full_path);
	if (!command_path)
		return (NULL);
	if (access(command_path, X_OK) == 0)
		return (command_path);
	free(command_path);
	return (NULL);
}

/**
 * @brief Searches for the full path of a given command using the PATH
 * environment variable.
 *
 * @param cmd The command to find (e.g., "ls").
 * @param envp Environment variables.
 * @return Full path to the executable, or NULL if not found.
 */
char	*get_path(char *cmd, char **envp)
{
	char	*path_env;
	char	**directories;
	char	*command_path;
	int		i;

	path_env = find_path_env(envp);
	if (!path_env)
		return (NULL);
	directories = split_path_directories(path_env);
	if (!directories)
		return (NULL);
	i = 0;
	while (directories[i])
	{
		command_path = construct_cmd_path(directories[i], cmd);
		if (command_path)
		{
			free_tab(directories);
			return (command_path);
		}
		i++;
	}
	free_tab(directories);
	return (NULL);
}
