#include "libft.h"

int    ft_check( const char *str, int ch ,int i)
{
    char    c;
    
    c = (char)ch;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return(0);
}
char *ft_strrchr(const char *str, int ch)
{
    char    c;
    int        i;

    i = 0;
    c = (char)ch;
    while (str[i])
    {
        if (str[i] == c)
        {
            if (ft_check(str,c,i+1) == 0)
            {
            return (str+i);
            }
            
        }
        i++;
    }
    return(NULL);
}
