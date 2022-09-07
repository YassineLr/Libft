#include "..\libft.h"

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