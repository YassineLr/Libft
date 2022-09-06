#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (nbr <= 9 && nbr >= 0)
	{
		ft_putchar_fd(nbr + '0', fd);
	}
	else if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nbr * (-1), fd);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}