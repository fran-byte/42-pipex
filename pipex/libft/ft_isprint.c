/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:29:23 by frromero          #+#    #+#             */
/*   Updated: 2024/09/22 08:35:13 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks if the character is part of the standard ASCII table (values 0–127)*/
/* Returns Non-Zero for true, and 0 for false */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
