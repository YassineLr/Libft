/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:53:46 by ylarhris          #+#    #+#             */
/*   Updated: 2022/09/09 17:53:46 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	del(void *t__t)
{
	free(t__t->content);
}

void	ft_lstdelone(t_list *lst, void(*del)(void*))
{
	t_list	*courant;

	courant = lst;
	while (courant)
	{
		(*del)(courant->content);
		courant = courant -> next;
	}
}