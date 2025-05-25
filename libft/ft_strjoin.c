/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:26:37 by frromero          #+#    #+#             */
/*   Updated: 2024/10/03 21:31:23 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function concatenates two strings, `s1` and `s2`, into a new string.
 * It allocates memory for the new string, ensuring enough space for both
 * strings and the null-terminator. The result is a new string that is the
 * combination of `s1` followed by `s2`.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_sz;
	char	*str;

	total_sz = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (total_sz + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, total_sz + 1);
	ft_strlcat(str, s2, total_sz + 1);
	return (str);
}
