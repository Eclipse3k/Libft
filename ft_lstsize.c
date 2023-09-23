#include "libft.h"

// ! NO SE HA COMPROBADO
int		ft_lstsize(t_list *lst)
{
	int	cont;

	cont = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		cont++;
	}
	return (cont);
}

