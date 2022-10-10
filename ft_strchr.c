/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:14:33 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 23:35:54 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	c;
	int		i;
	char	*t__t;

	i = 0;
	c = (char)ch;
	t__t = (char *) str;
	while (str[i])
	{
		if (str[i] == c)
			return (t__t + i);
		i++;
	}
	return (NULL);
}
