/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:15:14 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 04:03:11 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t		n;
	size_t		i;
	char		*dest;

	i = 0;
	n = ft_strlen(src) + 1;
	dest = (char *)malloc (n * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char str[] = "";
// 	printf("------>%s\n",strdup(str));
// 	printf("------>%s\n",ft_strdup(str));
// }
