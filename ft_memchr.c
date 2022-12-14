/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:39:22 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/21 16:17:00 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t__t;
	unsigned char	tmp;

	tmp = (unsigned char)c;
	t__t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (t__t[i] == tmp)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
