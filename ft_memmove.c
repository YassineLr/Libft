#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dest && !src)
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		s1 = (unsigned char *)(dest + (n - 1));
		s2 = (unsigned char *)(src + (n - 1));
		while (n--)
		{
			*s1-- = *s2--;
		}
	}
	return (dest);
}