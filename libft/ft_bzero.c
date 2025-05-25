/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:15:06 by frromero          #+#    #+#             */
/*   Updated: 2024/10/08 00:50:01 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Zeroes out `n` bytes of memory starting from the location pointed to by `s`*/
/* It is used to initialize memory to zero.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
