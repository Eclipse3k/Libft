#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
	char a[] = "hola soy gsdg s";
	char b[] = " jorgefdgssf";
	char *c;
    c = ft_strjoin(a, b);
    puts(c);
}
/*
int main()
{
    char str[50] = "I am going from Delhi to Gorakhpur";
    printf( "Function:\tmy_memmove with overlap\n" );
    printf( "Orignal :\t%s\n",str);
    printf( "Source:\t\t%s\n", str + 5 );
    printf( "Destination:\t%s\n", str + 11 );
    ft_memmove( str + 11, str + 5, 29 );
    printf( "Result:\t\t%s\n", str );
    return 0;
}*/