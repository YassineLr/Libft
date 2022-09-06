#include "libft.h"

int	ft_atoi(const char *s)
{
	int	res;
	int i;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] == 32 || (s[i] <= 13 && s[i] >= 9))
		i++;
	if (s[i] == '-')
	{
		sign *= (-1);
		i++;
	}
	else if(s[i] == '+')
		i++;
	while (s[i] <= '9' && s[i] >= '0')
	{
		res = res * 10;
		res = res + s[i] - 48;
		i++;
	}
	return (sign * res);
}
int main()
{
	char str[]="--12456";
	printf("%d",ft_atoi(str));
}