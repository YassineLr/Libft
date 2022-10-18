/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:36:45 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/14 01:42:06 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t__t;

	t__t = malloc(count * size);
	if (!t__t)
		return (0);
	ft_bzero(t__t, count * size);
	return (t__t);
}
