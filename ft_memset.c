/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:08:20 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/05 17:08:28 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t__t;

	t__t = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		t__t[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
