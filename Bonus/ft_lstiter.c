/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:28 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/18 03:15:30 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	courant;

	courant = lst;
	while (courant)
	{
		(*f)(courant -> content);
		courant = courant -> next;
	}
}
