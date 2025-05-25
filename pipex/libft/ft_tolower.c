/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:42:52 by frromero          #+#    #+#             */
/*   Updated: 2024/10/03 21:30:34 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts an uppercase letter to lowercase if applicable. Returns the */
/* lowercase equivalent, or the original character if not uppercase */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (c + 32);
	}
	return (c);
}
