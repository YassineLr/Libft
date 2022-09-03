#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ch1;
	ch1 = malloc(size);
	if(!ch1)
		return(NULL);
	ft_bzero(ch1, size);
	return (ch1);
}