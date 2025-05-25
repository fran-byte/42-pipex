/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:40:08 by frromero          #+#    #+#             */
/*   Updated: 2024/09/30 17:34:17 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Finds the last occurrence of a character `c` in the string `s`. */
/* If found, returns a pointer to the character; otherwise, returns `NULL`. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	sz_s;

	sz_s = ft_strlen(s);
	while (sz_s >= 0)
	{
		if (s[sz_s] == (char)c)
		{
			return ((char *)&s[sz_s]);
		}
		sz_s--;
	}
	return (NULL);
}
