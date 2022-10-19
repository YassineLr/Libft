/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:48 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/19 01:59:23 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void*), void (*del)(void*))
{
	t_list	*t__t;
	t_list	*courant;
	t_list	*courant1;
	t_list	*tmp;

	courant = lst;
	while (courant)
	{
		if (t__t == NULL)
			t__t = ft_lstnew((*f)(courant->content));
		else
		{
			courant1 = ft_lstnew((*f)(courant->content));
			if (!courant1)
			{
				while (!tmp)
				{
					(*del)(tmp ->content);
					tmp = tmp ->next;
				}
			}
			else
			{
				ft_lstadd_back(&t__t, courant1);
				courant = courant -> next;
			}
		}
	}
	return (t__t);
}