#include "libft.h"
{
    int        i;

    i = 0;
    while (str[i])
          i++;
    return (i);
}

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t        i;
    int        s;

    i = 0;
    s = ft_strlen(dest);
    while(src[i] && i < n)
    {
        dest[s] = src[i];
        i++;
        s++;
    }
    dest[s] = '\0';
    return (dest);
}