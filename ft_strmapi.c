#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		size;
	char		*t__t;

	i = 0;
	size = ft_strlen(s) + 1;
	t__t = (char*)malloc(size * sizeof(char));
	if(!t__t)
		return (NULL);
	while (s[i])
	{
		t__t[i] = (*f)(i,s[i]);
		i++;
	}
	t__t[i] = '\0';
	return (t__t);
}

#include <stdio.h>
#include <ctype.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"

char	ft_strmapi_ft(unsigned int	i, char	c)
{
	return (c + i);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	str0[] = "Hello world";
	char	str1[] = "1337 BENGUERIR";
	char	str2[] = "";
	char	str3[] = "0000000000";

	printf("%s\n", ft_strmapi(str0, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str1, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str2, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str3, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(0, ft_strmapi_ft));
	return (EXIT_SUCCESS);
}