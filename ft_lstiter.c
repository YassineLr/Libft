/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:28 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 18:47:42 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*courant;

	if (!lst || !f)
		return ;
	courant = lst;
	while (courant)
	{
		(*f)(courant -> content);
		courant = courant -> next;
	}
}
