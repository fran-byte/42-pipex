/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:47:01 by frromero          #+#    #+#             */
/*   Updated: 2024/09/22 08:34:58 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks if the character is a digit (0-9). Returns Non-Zero if true */
/* and 0 if false */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
