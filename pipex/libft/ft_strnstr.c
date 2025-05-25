/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:36:53 by frromero          #+#    #+#             */
/*   Updated: 2024/10/03 23:50:00 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function locates the first occurrence of the substring `substr` in the
string `src`, searching within the first `len` characters of `src`.
If `substr` is an empty string, it returns `src`. It returns a pointer to the
start of the located substring, or NULL if the substring is not found within the
specified length.*/

#include "libft.h"

char	*ft_strnstr(const char *src, const char *substr, size_t len)
{
	size_t	i_sr;
	size_t	i_sb;

	i_sr = 0;
	if (*substr == '\0')
		return ((char *)src);
	while (src[i_sr] != '\0')
	{
		i_sb = 0;
		while (src[i_sr + i_sb] == substr[i_sb] && (i_sr + i_sb) < len)
		{
			if (src[i_sr + i_sb] == '\0' && substr[i_sb] == '\0')
				return ((char *)&src[i_sr]);
			i_sb++;
		}
		if (substr[i_sb] == '\0')
			return ((char *)src + i_sr);
		i_sr++;
	}
	return (NULL);
}
