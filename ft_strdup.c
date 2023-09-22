#include "libft.h"

char	*ft_strdudst(const char *src)
{
	size_t len;
	char *dst;

	len = ft_strlen(src) + 1;
	dst = malloc (len);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, src, len);
	return (dst);
}