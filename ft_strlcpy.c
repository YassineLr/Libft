/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:55:47 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 16:46:53 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s2);
	if (len > 0)
	{
		while (s2[i] != '\0' && i < len - 1)
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
	}
	return (l);
}

int main(int ac, char **av)
{
	char strp[] = "yassine";
	char str[] = "larhrissi";

	printf("%zu\t %s\n", ft_strlcpy(str,strp,4),str);
}