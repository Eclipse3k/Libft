#include "libft.h"

// ? Working perfectly

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;
    /* Ns si es necesario
    if (s == NULL)
        return (NULL);
    
    p = s; 
    */
    while (n--)
    {
        *p++ = c;
    }
}