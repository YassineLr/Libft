/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:19:23 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 03:09:59 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src[i] == '\0')
		return (NULL);
	else if (n == 0 && to_find[j] == '\0')
		return ((char *)src);
	else if (n == 0)
		return (NULL);
	if (to_find[j] == '\0')
		return ((char *)src);
	while (src[i + j] && i + j < n)
	{
		j = 0;
		while (src[i + j] == to_find[j] && i + j < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
