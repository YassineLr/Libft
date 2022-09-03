#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *ch;

    ch = (char*)malloc(size);
    if(!ch)
      return (NULL);
    ft_bzero(ch, size);
    return (ch);
}