/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:28:09 by frromero          #+#    #+#             */
/*   Updated: 2024/09/26 16:57:27 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if ((*str == '+' || *str == '-') && (*(str + 1) == '+'
			|| *(str + 1) == '-'))
		return (0);
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1 * sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result + *str - '0';
		str++;
	}
	return (sign * result);
}
