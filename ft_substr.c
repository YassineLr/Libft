/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:38:24 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/07 20:42:48 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*t__t;

	i = 0;
	n = min(ft_strlen(s) - start, len);
	t__t = (char *)malloc((n + 1) * sizeof(char));
	if (!t__t)
		return (NULL);
	while (i < len && s[start + i])
	{
		t__t[i] = s[start + i];
		i++;
	}
	t__t[i] = '\0';
	return (t__t);
}
