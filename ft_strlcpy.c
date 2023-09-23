#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	int				count;

	if (!src)
		return (0);
	count = (unsigned int)ft_strlen(src);
	if (!size)
		return (count);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);

}