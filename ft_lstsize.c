#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	cont;

	cont = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		cont++;
	return (cont);
}

