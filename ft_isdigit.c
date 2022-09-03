#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0' )
	{
		return (1);
	}
	return(0);
}