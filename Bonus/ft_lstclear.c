/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:19:12 by ylarhris          #+#    #+#             */
/*   Updated: 2022/09/09 18:19:12 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*courant;

	courant = *lst;
	while (courant)
	{
		ft_lstdelone(courant,del);
		courant = courant->next;
	}
}