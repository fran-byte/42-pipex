/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:28:27 by frromero          #+#    #+#             */
/*   Updated: 2024/10/03 21:24:35 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function creates a duplicate of the string `s1`. It allocates enough
memory for the new string, including space for the null terminator. The function
copies the content of `s1` to the newly allocated memory and returns a pointer
to it. If the allocation fails, it returns NULL.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*nw_str;

	i = 0;
	j = ft_strlen(s1) + 1;
	nw_str = malloc(j);
	if (nw_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		nw_str[i] = s1[i];
		i++;
	}
	nw_str[i] = '\0';
	return (nw_str);
}
