#include "libft.h"

void	ft_strclr(char *str)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(str);
	ft_bzero(str, n);
}
