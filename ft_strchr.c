#include "libft.h"
char *ft_strchr( const char *str, int ch )
{
    char	c;
	int		i;

	i = 0;
	c = (char)ch;
	while (str[i])
	{
		if (str[i] == c)
			return (str+i);
		i++;
	}
	return(NULL);
}