/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:40:03 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/21 16:10:22 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcchr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, char *set)
{
	int	i;
	int	j;
	int	len;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] != '\0' && ft_strcchr(set, s[i]) == 1)
		i++;
	while (j >= 0 && ft_strcchr(set, s[j]))
		j--;
	if (j == -1)
		len = 0;
	else
		len = j - i + 1;
	return (ft_substr(s, i, len));
}
