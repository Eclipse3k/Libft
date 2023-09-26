/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:28:16 by josanch2          #+#    #+#             */
/*   Updated: 2023/09/26 18:27:24 by josanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo;
	t_list	*temp;

	if (!lst || !del)
		return ;
	nodo = *lst;
	while (nodo != NULL)
	{
		temp = nodo->next;
		ft_lstdelone(nodo, del);
		nodo = temp;
	}
	*lst = NULL;
}
