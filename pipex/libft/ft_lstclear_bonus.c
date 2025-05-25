/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:56:35 by frromero          #+#    #+#             */
/*   Updated: 2024/10/07 21:32:58 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given node 'lst' and all subsequent nodes in the
   list, using the function 'del' for the content and 'free' for the nodes.
   At the end, the pointer to the list is set to NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
