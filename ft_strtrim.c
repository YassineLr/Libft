#include "libft.h"
char    *ft_strtrim(char const *s)
{
    int        i;
    int        len;
    char    *t__t;

    len = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        {
            len++;
        }
        i++;
    }
    t__t = (char*)malloc((len + 1) * sizeof(char));
    if (!t__t)
        return (NULL);
    i = 0;
    len = 0;
    while (s[i])
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        {
            i++;
        }
        else
        {
          t__t[len] = s[i];
          i++;
          len++;
        }
    }
    t__t[len]='\0';
    return (t__t);
}