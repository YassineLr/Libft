#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"

void	ft_striteri_ft(unsigned int	i, char	*c)
{
	*c = *c + i;
}

int	main(void)
{
	char	str0[] = "Hello world";
	char	str1[] = "1337 Benguerir";
	char	str2[] = "";
	char	str3[] = "0000000000";
	char	str4[] = "0000000000";

	ft_striteri(str0, ft_striteri_ft);
	ft_striteri(str1, ft_striteri_ft);
	ft_striteri(str2, ft_striteri_ft);
	ft_striteri(str3, ft_striteri_ft);
	ft_striteri(str4, 0);
	printf("%s\n", str0);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	return (EXIT_SUCCESS);
}