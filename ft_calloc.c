#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t__t;

	t__t = malloc(count * size);
	if (!t__t)
		return (0);
	ft_bzero(t__t, count * size);
	return (t__t);
}