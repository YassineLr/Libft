#include "libft.h"

 void    *ft_memchr(const void *s, int c, size_t n)
{
    int				i;
    const char    	*t__t;
    char    		tmp;

    tmp = (char)c;
    t__t = (char*)s;
    i = 0;
    while(t__t)
    {
        if (t__t[i] == tmp)
        {
            return (s+i);
        }
        i++;
    }
    return(NULL);
}