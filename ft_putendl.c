#include "libft.h"
void	ft_putendl(char const * s)
{
	ft_putstr(s);
	write(1, '\n', 1);
}