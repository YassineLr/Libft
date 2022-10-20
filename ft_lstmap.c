/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:48 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/20 16:38:03 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void*), void (*del)(void*))
{
	t_list	*t__t;
	t_list	*courant;

	t__t = NULL;
	while (lst != NULL)
	{
		if (t__t == NULL)
			t__t = ft_lstnew((*f)(lst->content));
		else
		{
			courant = ft_lstnew((*f)(lst->content));
			if (!courant)
			{
				ft_lstclear(&t__t, del);
				return (NULL);
			}
			else
				ft_lstadd_back(&t__t, courant);
		}
		lst = lst -> next;
	}
	return (t__t);
}
