/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:25:44 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/07 20:36:59 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest < src)
	{
		while (n)
		{
			*(s1 + n) = *(s2 + n);
			n--;
		}
		return (dest);
	}return (dest);
}

int	main(void)
{
	char	str[] = "yaasi";
	char	str1[] = "larhrissi";

	printf("With predifined memmove ------> %s\n", memmove(str, str1, 3));
	printf("With my ft_memmove -----------> %s\n", ft_memmove(str, str1, 3));
}
