/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:57:07 by frromero          #+#    #+#             */
/*   Updated: 2024/10/07 21:29:18 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns the last node of a singly linked list. It traverses the list
   until it reaches a node where the 'next' pointer is NULL, indicating
   the end of the list. */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
