/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:00:46 by frromero          #+#    #+#             */
/*   Updated: 2024/10/05 16:17:35 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* For each character in the string 's', applies the function 'f' with the
index of each character within 's' and the address of the character itself as
parameters, which can be modified if necessary.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = -1;
	if (s == NULL && f == NULL)
		return ;
	while (s[++i])
		(*f)(i, &s[i]);
}
