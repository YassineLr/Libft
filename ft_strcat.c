#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
    int        i;
    int       n;

    i = 0;
    n = ft_strlen(dest);
    while(src[i])
    {
        dest[n] = src[i];
        i++;
        n++;
    }
    dest[n] = '\0';
    return (dest);
}