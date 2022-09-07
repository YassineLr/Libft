#include "../libft.h"

t_list	ft_lstlast(t_list *lst)
{
	t_list	*courant;

	courant = lst;
	while (courant->next)
		courant = courant -> next;
	return (courant);
}