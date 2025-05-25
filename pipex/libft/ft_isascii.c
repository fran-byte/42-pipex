/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:23:03 by frromero          #+#    #+#             */
/*   Updated: 2024/09/22 08:34:45 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks if the character is part of the standard ASCII table (values 0–127) */
/* Returns Non-Zero if true, 0 for false */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
