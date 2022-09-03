#include "libft.h"

void	f(char*);
void	ft_striter(char *s, void(*f)(char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(&s[i]);
		i++;
	}
}