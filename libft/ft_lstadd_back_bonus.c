/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:56:18 by frromero          #+#    #+#             */
/*   Updated: 2024/10/07 21:39:03 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node 'new' to the end of the linked list 'lst'. If the list is
   empty, the new node becomes the head of the list. If the list is not empty,
   the function finds the last node and updates its 'next' pointer to point to
   the new node.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
