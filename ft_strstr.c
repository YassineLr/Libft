#include"libft.h"

char *ft_strstr(const char *src, const char *to_find)
{
    int    i;
    int    j;
    int    n;

    i = 0;
    j = 0;
    n = ft_strlen(to_find);
    while (src[i])
    {
      j = 0;
        if (src[i] == to_find[j])
        {
          j++;
            while (src[i+j] == to_find[j])
            {
                src[i+j] == to_find[j];
                j++;
            }
            if (j == n)
            {
                return(src+i);
            }
        }
        i++;
    }
    return(NULL);
}