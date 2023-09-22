#include "libft.h"

// ! COMPROBAR
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	s += i - 1;
	while (i-- && c != *s)
	{
		s--;
	}
	if (*s == c)
		return (s);
	return (0);
}