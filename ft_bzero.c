#include "libft.h"

// ? Working perfectly

void    ft_bzero(void *s, int n)
{
    unsigned char   *p;

    p = s;

    while (n--)
    {
        *p++ = '\0';
    }
}