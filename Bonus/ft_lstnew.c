/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:16:10 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 03:16:54 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*t__t;

	t__t = (t_list *)malloc (sizeof(size_t));
	if (!t__t)
		return (NULL);
	t__t -> content = content;
	t__t -> next = NULL;
	return (t__t);
}
