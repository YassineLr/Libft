/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:46:49 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/20 20:30:25 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ch;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	ch = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ch)
		return (NULL);
	while (s1[i])
	{
		ch[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ch[i + j] = s2[j];
		j++;
	}
	ch[i + j] = '\0';
	return (ch);
}
