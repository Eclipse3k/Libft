#include "libft.h"

// ? Working perfectly

void    *ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;
	char *dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}