#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;

	p = s;
	while (n--)
	{
		if (*p == c)
			return ((void *) p);
		p++;
	}
	return (0);
}