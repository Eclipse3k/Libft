#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (len --)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
