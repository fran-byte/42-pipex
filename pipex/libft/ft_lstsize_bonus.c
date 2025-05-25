/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:57:32 by frromero          #+#    #+#             */
/*   Updated: 2024/10/07 21:24:54 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Counts the number of nodes in a singly linked list. It iterates through
   the list, starting from the node passed as argument*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
