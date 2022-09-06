#include "libft.h"

int	ft_wdcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			count++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
	}
	return (count);
}

char	*ft_strxdup(const char *s, char c, int *x)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	while (s[*x] == c)
		*x = *x + 1;
	i = *x;
	while (s[i] != '\0' && s[i] != c)
	{
		len++;
		i++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s[*x] != '\0' && s[*x] != c)
	{
		str[i++] = s[*x];
		*x = *x + 1;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_handle_err(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		x;
	int		len;
	char	**strs;

	i = 0;
	if (!s)
		return (0);
	len = ft_wdcount(s, c);
	strs = (char **)malloc((len + 1) * sizeof(char *));
	if (!strs)
		return (0);
	while (i < len)
	{
		strs[i] = ft_strxdup(s, c, &x);
		if (!strs[i])
			return (ft_handle_err(strs));
		i++;
	}
	strs[i] = 0;
	return (strs);
}