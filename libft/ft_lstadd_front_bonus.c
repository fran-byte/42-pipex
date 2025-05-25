/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:56:25 by frromero          #+#    #+#             */
/*   Updated: 2024/10/07 21:39:23 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node 'new' to the beginning of the linked list 'lst'. The 'next'
   pointer of the new node is updated to point to the current first node,
   and the head of the list is updated to the new node.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
