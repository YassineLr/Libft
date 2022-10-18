/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:43:58 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 21:49:33 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*courant;

	if (!lst || !new)
		return ;
	courant = *lst;
	while (courant)
		courant = courant -> next;
	courant -> next = new;
	new -> next = NULL;
}
