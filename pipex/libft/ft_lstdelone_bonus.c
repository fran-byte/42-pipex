/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:56:45 by frromero          #+#    #+#             */
/*   Updated: 2024/10/07 21:34:03 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Frees the memory of the node 'lst', first using the function 'del' to
   free the content of the node, and then freeing the node itself. The
   'next' pointer is not freed, as only the given node is affected. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
