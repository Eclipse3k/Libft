#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	len;
	void	*ptr;

	len = nitems * size;
	ptr = malloc(len);
	if(ptr != NULL)
		return (0);
	ft_memset(ptr, 0, len);
	return (ptr);
}
