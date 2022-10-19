/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:48 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/19 05:53:42 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void*), void (*del)(void*))
{
	t_list	*t__t;
	t_list	*courant1;

	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (t__t == NULL)
			t__t = ft_lstnew((*f)(lst->content));
		else
		{
			courant1 = ft_lstnew((*f)(lst->content));
			if (!courant1)
				ft_lstclear(&t__t, del);
			else if (lst -> next == NULL)
				ft_lstadd_back(&t__t, courant1);
		}
		lst = lst -> next;
	}
	courant1 = t__t;
	while (lst)
		courant1 = courant1 ->next;
	courant1 -> next = NULL;
	return (t__t);
}
