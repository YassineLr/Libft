/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:55:28 by ylarhris          #+#    #+#             */
/*   Updated: 2022/09/09 18:55:28 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void*), void (*del)(void*))
{
	t_list	*t__t;
	t_list	*courant;
	t_list	*courant1;

	t__t = NULL;
	courant = lst;
	while (courant)
	{
		if (t__t == NULL)
		{
			t__t = ft_lstnew((*f)(courant->content));
		}
		courant1 = ft_lstnew((*f)(courant->content));
		ft_lstadd_back(&t__t, courant1);
		courant = courant -> next; 
	}
	return(t__t);
}