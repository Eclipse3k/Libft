#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo;
	t_list	*temp;

	nodo = *lst;
	while (nodo->next != NULL)
	{
		temp = nodo->next;
		ft_lstdelone(nodo, del);
		nodo = temp;
	}
	*lst = NULL;
}