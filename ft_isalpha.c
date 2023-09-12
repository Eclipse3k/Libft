#include "libft.h"

int		ft_isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return 2;
	if 	(c <= 'Z' && c >= 'A')
		return 1;
	return 0;
}