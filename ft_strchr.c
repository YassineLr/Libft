/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:14:33 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/19 21:28:02 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;

	i = 0;
	if (ch == 0)
		return ("");
	while (str[i])
	{
		if (str[i] == (const char)ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
