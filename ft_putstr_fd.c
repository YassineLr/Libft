#include "libft.h"
     #include <fcntl.h>
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i],fd);
		i++;
	}
}
int main(int ac, char **av)
{
	int fd;
	
	fd = open("test", O_WRONLY);
	ft_putstr_fd(av[1],fd);
}