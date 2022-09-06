#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t		n;
	size_t		i;
	char	*dest;

	i = 0;
	n = strlen(src) + 1;
	dest = (char *)malloc (n * sizeof(char));
	if (!dest)
	{
		return (0);
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
