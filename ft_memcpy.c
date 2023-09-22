#include "libft.h"

// ? Working perfectly

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned const char *s;

    d = dest;
    s = src;
    while (n--)
    {
        *d++ = *s++;
    }
}