/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:36:31 by ylarhris          #+#    #+#             */
/*   Updated: 2022/09/08 14:36:31 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*#include <stdio.h>
#include<stdlib.h>

typedef struct  s_list
{
    void	*content;
	struct	s_list	*next;	
}	t_list;*/

// creation of a linked list

t_list	*ft_lstnew(void *content)
{
	t_list	*t__t;

	t__t = (t_list*)malloc(sizeof(t_list));
	t__t -> content = content;
	t__t -> next = NULL;
	return(t__t);
}
// add some nodes from thr beginning of list

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
    *lst = new;
}

// add some nodes from the ending of list

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*courant;

	courant = lst;
	while (courant->next)
		courant = courant -> next;
	return (courant);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*courant;

	courant = ft_lstlast(*lst);
	courant -> next = new;
	new -> next = NULL;
}

// shown the contents of the nodes

void    shown(t_list **lst)
{
    t_list *courant;

    courant = *lst;
    while (courant)
    {
        printf("%s",courant -> content);
		printf("%d",(*courant) . content);
        courant = courant -> next;
    }
}

// for the size

int		ft_lstsize(t_list *lst)
{
	t_list	*courant;
	int		size;

	size = 0;
	courant = lst;
	while(courant)
	{
		courant = courant -> next;
		size++;
	}
	return (size);
}

// Delete

#include "..\libft.h"

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

// testing ...

int main()
{
    t_list  *t__t;
    t_list  *new;
    t_list  *back;
    char str[] = "yassine ";
    char str1[] = "amine ";
    char str2[] = "zizo";

    t__t = ft_lstnew(str);
    new = ft_lstnew(str1);
    back = ft_lstnew(str2);
    ft_lstadd_front(&t__t,new);
    ft_lstadd_back(&t__t,back);
    shown(&t__t);
    printf("%d",ft_lstsize(t__t));
	ft_lstdelone(t__t,(*del)(void*));

}