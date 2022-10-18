/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:14:20 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 03:14:21 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*courant;

	courant = *lst;
	while (courant)
	{
		ft_lstdelone(courant, del);
		courant = courant->next;
	}
}
