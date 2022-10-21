/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:16:46 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/21 17:40:57 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		size;
	char		*m_str;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s) + 1;
	m_str = (char *)malloc(size * sizeof(char));
	if (!m_str)
		return (NULL);
	while (s[i])
	{
		m_str[i] = (*f)(i, s[i]);
		i++;
	}
	m_str[i] = '\0';
	return (m_str);
}
