/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:32:54 by frromero          #+#    #+#             */
/*   Updated: 2024/09/26 16:25:43 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks if the character is alphabetic (either uppercase or lowercase) */
/* Returns Non-Zero for true and 0 for false */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
