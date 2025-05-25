/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:59:33 by frromero          #+#    #+#             */
/*   Updated: 2024/10/03 21:26:28 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Sends the character 'c' to the specified file descriptor. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
