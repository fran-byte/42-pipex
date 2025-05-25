/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:38:27 by frromero          #+#    #+#             */
/*   Updated: 2024/10/05 22:31:59 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory for an array of `count` elements, each of `size` bytes,   */
/*and initializes all bytes to zero. Returns a pointer to the allocated memory*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
