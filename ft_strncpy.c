#include "libft.h"

char    *ft_strcpy(char *dest, char *src, int n)
{
    int    i;

    i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return(dest);
}
