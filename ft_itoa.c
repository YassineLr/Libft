/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:15:50 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/21 16:19:37 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	taille(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
		n = -n;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

long	ft_abs(long n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

char	*ft_itoa(int n)
{
	long	z;
	int		i;
	int		s;
	char	*str;

	z = ft_abs(n);
	if (n >= 0)
		s = taille(z) + 1;
	else
		s = taille(z) + 2;
	str = (char *)malloc (s * sizeof (char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	i = s - 2;
	while (z)
	{
		str[i--] = z % 10 + 48;
		z /= 10;
	}
	str[s - 1] = '\0';
	return (str);
}
