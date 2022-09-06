#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		size;
	char		*t__t;

	i = 0;
	size = ft_strlen(s) + 1;
	t__t = (char*)malloc(size * sizeof(char));
	if(!t__t)
		return (NULL);
	while (s[i])
	{
		t__t[i] = (*f)(i,s[i]);
		i++;
	}
	t__t[i] = '\0';
	return (t__t);
}