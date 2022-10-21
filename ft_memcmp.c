/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:53:47 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/21 16:13:14 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t__t1;
	unsigned char	*t__t2;

	i = 0;
	if (n == 0)
		return (0);
	t__t1 = (unsigned char *)s1;
	t__t2 = (unsigned char *)s2;
	while (i < n -1 && t__t1[i] == t__t2[i])
		i++;
	return (t__t1[i] - t__t2[i]);
}
