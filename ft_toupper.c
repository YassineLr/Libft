#include "libft.h"

int		ft_toupper(int ch)
{
	if(ch <= 'z' && ch >= 'a')
		return (ch-32);
	return (ch);
}