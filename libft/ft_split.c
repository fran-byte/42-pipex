/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:54:04 by frromero          #+#    #+#             */
/*   Updated: 2024/09/29 16:30:52 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_split, splits a string into an array of strings based on a delimiter*/
/*It returns a null-terminated array where each element is a substring */
/*separated by the specified delimiter.*/

#include "libft.h"

static int	ft_count_words(const char *str, char delimiter)
{
	int	word_count;
	int	in_word;

	word_count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimiter && in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		else if (*str == delimiter)
			in_word = 0;
		str++;
	}
	return (word_count);
}

static	char	*ft_extract_substring(int start, int end, const char *str,
	char **words)
{
	char	*substring;
	int		index;

	index = 0;
	substring = malloc((end - start + 1) * sizeof(char));
	if (!substring)
	{
		while (words[index])
		{
			free(words[index]);
			index++;
		}
		free(words);
		return (NULL);
	}
	while (start < end)
	{
		substring[index] = str[start];
		index++;
		start++;
	}
	substring[index] = '\0';
	return (substring);
}

char	*assign_new_word(char *new_word, int *index)
{
	*index = -1;
	return (new_word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	*new_word;
	char	**words;

	words = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!words || !s)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			new_word = ft_extract_substring(index, i, s, words);
			if (!new_word)
				return (NULL);
			words[j++] = assign_new_word(new_word, &index);
		}
	}
	return (words[j] = NULL, words);
}
