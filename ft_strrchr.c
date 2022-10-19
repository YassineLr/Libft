/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:44:02 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/19 21:12:38 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	n;

	n = ft_strlen(str);
	if (!str)
		return (NULL);
	while (n >= 0)
	{
		if (str[n] == (const char)ch)
			return ((char *)str + n);
		n--;
	}
	return (NULL);
}
