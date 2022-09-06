#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t				i;
    char    		*t__t;
    char    		tmp;

    tmp = (char)c;
    t__t = (char*)s;
    i = 0;
    while(t__t && i<n)
    {
        if (t__t[i] == tmp)
        {
            return ((void *)s + i);
        }
        i++;
    }
    return(NULL);
}
/*
int	main()
{
	char str[]="future is loading !!";
	char	*t__t;
	t__t = (char *)ft_memchr(str, 103, 20);
	printf("%s\n",t__t);
	printf("%s",memchr(str,103,20));
}
*/