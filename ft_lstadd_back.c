/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:43:58 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 22:05:39 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*courant;

	courant = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (courant -> next)
			courant = courant -> next;
		courant -> next = new;
	}
}
