/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:50:46 by frromero          #+#    #+#             */
/*   Updated: 2024/09/30 16:16:10 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fills memory with a specified byte for a given length, */
/* returns pointer to memory */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*buf;

	i = 0;
	buf = (unsigned char *)s;
	while (i < n)
	{
		buf[i] = c;
		i++;
	}
	return (buf);
}
