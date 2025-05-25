/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:29:11 by frromero          #+#    #+#             */
/*   Updated: 2024/09/26 16:56:24 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Creates a substring from string `s`, starting at index `start` and of */
/* maximum length `len`. Returns the new substring or `NULL` if allocation */
/* fails. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*cp_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	cp_s = malloc(len + 1);
	if (!cp_s)
		return (NULL);
	while (i < len)
	{
		cp_s[i] = s[start + i];
		i++;
	}
	cp_s[i] = '\0';
	return (cp_s);
}
