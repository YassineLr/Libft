#include "libft.h"

char *ft_strchr(const char *str, int ch )
{
    char	c;
	int		i;
	char	*t__t;

	i = 0;
	c = (char)ch;
	t__t = (char*)str;
	while (str[i])
	{
		if (str[i] == c)
			return (t__t+i);
		i++;
	}
	return(NULL);
}