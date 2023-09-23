#include "libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (char *)malloc(size * count);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, size * count));
}

