#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	size_t	m;
	size_t	i;
	char	*ch;

	i = 0;
	n = strlen(s1);
	m = strlen(s2);
	ch = (char *)malloc( m + n + 1);
	while (i<n)
	{
		ch[i] = s1[i];
		i++;
	}
	i = 0;
	while(i<m)
	{
		ch[i + n] = s2[i];
		i++;
	}
	ch[n+m] = '\0';
	return(ch);
}
