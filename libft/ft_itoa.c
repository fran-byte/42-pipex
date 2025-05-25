/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:37:47 by frromero          #+#    #+#             */
/*   Updated: 2024/09/28 17:19:28 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convert an integer into its string representation*/

#include "libft.h"

static void	ft_isnegative(size_t sz, char *string, long nbr)
{
	*(string + sz--) = '\0';
	while (nbr > 0)
	{
		*(string + sz--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (string[1] == '\0' && sz == 0)
		*(string + sz) = '0';
	else if (string[1] != '\0' && sz == 0)
		*(string + sz) = '-';
}

char	*ft_itoa(int n)
{
	long	numbr;
	size_t	sz;
	char	*string;

	numbr = n;
	sz = 0;
	if (n <= 0)
	{
		numbr = -numbr;
		sz = 1;
	}
	while (n)
	{
		n /= 10;
		sz++;
	}
	string = (char *)malloc(sz + 1);
	if (!(string))
		return (0);
	ft_isnegative(sz, string, numbr);
	return (string);
}
