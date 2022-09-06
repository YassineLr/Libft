#include "libft.h"

char *ft_strnstr(const char *src, const char *to_find, size_t n)
{
    size_t    i;
    size_t    j;
    size_t    s;

    i = 0;
    j = 0;
    s = ft_strlen(to_find) + 1;
    if(!to_find[j])
        return((char *)src);
    while (src[i] && i<n)
    {
      j = 0;
        if (src[i] == to_find[j])
        {
          j++;
            while (src[i+j] == to_find[j])
            {
                j++;
            }
            if (j == s)
            {
                return((char *)src+i);
            }
        }
        i++;
    }
    return(NULL);
}