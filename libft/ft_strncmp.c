/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:46:06 by frromero          #+#    #+#             */
/*   Updated: 2024/09/30 17:42:43 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compares the first `n` characters of two strings (`s1` and `s2`). */
/* Returns a negative, zero, or positive integer based on the comparison */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 && i < n && (*s1 == *s2))
	{
		i++;
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
