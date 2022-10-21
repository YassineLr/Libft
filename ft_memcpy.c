/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:03:50 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/21 17:44:45 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*nsrc;

	if (!src && !dest)
		return (NULL);
	if (src == dest)
		return (dest);
	dst = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(dst + i) = *(nsrc + i);
		i++;
	}
	return (dst);
}
