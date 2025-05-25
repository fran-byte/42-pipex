/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:56:52 by frromero          #+#    #+#             */
/*   Updated: 2024/10/07 21:31:39 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates through each node of the linked list 'lst' and applies the
   function 'f' to the content of every node*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
