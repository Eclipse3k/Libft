#include "libft.h"

// ! COMPROBAR
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	s += i;
	while (i-- && c != *s)
	{
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}