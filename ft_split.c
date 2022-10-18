/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:25:49 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 03:41:21 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wdcount(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i + 1] == '\0' || (str[i] == c && str[i + 1] != c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_lcount(int i, char *str, char sep)
{
	int	count;

	count = 0;
	while (str[i] == sep)
		i++;
	while (str[i] && str[i] != sep)
	{
		count++;
		i++;
	}
	return (count + 1);
}

static char	*ft_filling(char *t__t, char *str, char sep, int i)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	t__t = (char *) malloc (ft_lcount(i, str - i, sep) * sizeof(char));
	if (!t__t)
		return (NULL);
	while (str[j] && str[j] != sep)
	{
		t__t [k] = str [j];
		j++;
		k++;
	}
	t__t [k] = '\0';
	return (t__t);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		j;
	char	**t__t;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	t__t = (char **) malloc ((ft_wdcount(str, sep) + 1) * sizeof(char *));
	if (!t__t)
		return (NULL);
	while (str[i] && j < ft_wdcount(str, sep))
	{
		while (str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
		{
			t__t [j] = ft_filling(t__t[j], str + i, sep, i);
			j++;
		}
		i += ft_lcount(i, str, sep);
	}
	t__t[j] = NULL;
	return (t__t);
}
