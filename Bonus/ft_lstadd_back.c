#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*courant;

	courant = ft_lstlast(*lst);
	courant -> next = new;
	new -> next = NULL;
}