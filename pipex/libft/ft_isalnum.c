/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:50:13 by frromero          #+#    #+#             */
/*   Updated: 2024/09/30 15:48:58 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks if the character is alphanumeric (either a digit or an alphabetic */
/* character). Returns Non-Zero for true, 0 for false.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
