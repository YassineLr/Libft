#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(s1 + i) = *(s2 + i);
		if (s2[i] == c)
			return (s1 + i + 1);
		i++;
	}
	return (0);
}