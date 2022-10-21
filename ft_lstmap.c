/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:48 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/21 16:18:36 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void*), void (*del)(void*))
{
	t_list	*l_new;
	t_list	*courant;

	l_new = NULL;
	while (lst != NULL)
	{
		if (l_new == NULL)
			l_new = ft_lstnew((*f)(lst->content));
		else
		{
			courant = ft_lstnew((*f)(lst->content));
			if (!courant)
			{
				ft_lstclear(&l_new, del);
				return (NULL);
			}
			else
				ft_lstadd_back(&l_new, courant);
		}
		lst = lst -> next;
	}
	return (l_new);
}
