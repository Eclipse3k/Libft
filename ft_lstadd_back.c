#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;

	if (*lst)
	{
		node = ft_lstlast(*lst);
		node->next = new;	
	}
	else
		*lst = new;
}