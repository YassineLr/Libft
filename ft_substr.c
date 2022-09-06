#include "libft.h"

int        Min(int a, int b)
{
    if(a<b)
        return (a);
    return(b);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int        i;
    int        n;
    char    *t__t;

    i = 0;
    n = Min(ft_strlen(s) - start ,len );
    t__t = (char*)malloc((n+1)*sizeof(char));
    if(!t__t)
        return (NULL);
    while(i<len && s[start+i])
    {
        t__t[i] = s[start + i];
        i++; 
    }
    t__t[i] = '\0';
    return (t__t);
}
