#include "libft.h"

int		strcount(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	while (s[i])
	{
		if(s[i] == c && s[i+1] != c && s[i+1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int		ccount(char cont *s, char c, int pos)
{
	int	i;

	i = 0;
	while(s[pos + i] != c && s[pos + i] =! '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int	i;
	char **array;

	array = (char **)malloc(strcount(s,c) * sizeof(char*));
	while(s[i])
	{
		array[j] = (char*)malloc((ccount(s,c,i) + 1) * sizeof(char));
		k = 0;
		while (s[i] != c)
		{
			array[j][k] = s[i]
		}
		
	}
}
