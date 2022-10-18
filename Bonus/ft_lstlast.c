/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:36 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 03:15:40 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	ft_lstlast(t_list *lst)
{
	t_list	*courant;

	courant = lst;
	while (courant->next)
		courant = courant -> next;
	return (courant);
}
