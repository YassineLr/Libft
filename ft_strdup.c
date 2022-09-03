#include "libft.h"

char	*ft_strdup(char *src)
{
	int		n;
	int		i;
	char	*dest;

	i = 0;
	n = ft_strlen(src) + 1;
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