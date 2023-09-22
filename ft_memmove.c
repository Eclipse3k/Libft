#include "libft.h"

// ? Working perfectly

void    ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *d;
    unsigned const char   *s;

    d = dest;
    s = src;
    if ((d < s + n) && s < d)
    { 
        d += n;
        s += n;
        while (n--)
        {
            *(--d) = *(--s);
        }
    
    }
    else 
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
}