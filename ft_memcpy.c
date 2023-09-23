#include "libft.h"

// ? Working perfectly

void    *ft_memcpy(void *dst, const void *sc, size_t n)
{
    size_t i;

	if (!dst && !sc)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)sc)[i];
		i++;
	}
	return (dst);
}