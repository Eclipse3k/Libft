#include "libft.h"

// ? Working perfectly

int     ft_isascii(int c)
{
    return (c >= 0 && c <= 127) ? 1 : 0;
    /*if (c >= 0 && c <= 127)
        return (1);
    return (0);*/
}