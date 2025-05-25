/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:31:03 by frromero          #+#    #+#             */
/*   Updated: 2024/09/30 18:22:07 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts a lowercase letter to uppercase if applicable. Returns the */
/* uppercase equivalent, or the original character if not lowercase. */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (c - 32);
	}
	return (c);
}
