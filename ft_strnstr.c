/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:19:23 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 20:30:45 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	j = 0;
	s = ft_strlen(to_find) + 1;
	if (!to_find[j])
		return ((char *)src);
	while (src[i] && i < n)
	{
		j = 0;
		if (src[i] == to_find[j])
		{
			j++;
			while (src[i + j] == to_find[j])
				j++;
			if (j == s)
				return ((char *)src + i);
		}
		i++;
	}
	return (NULL);
}

