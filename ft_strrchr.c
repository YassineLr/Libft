/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:44:02 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 23:59:31 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *str, int ch, int i)
{
	char	c;

	c = (char)ch;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strrchr(const char *str, int ch)
{
	char	c;
	int		i;

	i = 0;
	c = (char)ch;
	if(ch == '\0')
		return((char *)str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == c)
		{
			if (ft_check(str, c, i + 1) == 0)
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
