#include "libft.h"

int	isalnum(int c)
{
	if (c >= 0 && c <= 9 || c >= 'a' && c <= 'z' \
	|| c >=  'A' <= 'Z')
	{
		return (1);
	}
	return (0);
}