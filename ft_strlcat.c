#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	j = len_dest;
	if (len_dest >= size)
		return (len_src + size);
	i = 0;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
		j++;
	}
	dest[i + len_dest] = '\0';
	return (len_src + len_dest);
}