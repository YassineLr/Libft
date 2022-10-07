#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*t__t;

	t__t = (t_list*)malloc(sizeof(size_t));
	if(!t__t)
		return (NULL);
	t__t -> content = content;
	t__t -> next = NULL;
	return(t__t);
}

int	main()
{
	char str[] = "yassine";
	t_list	t__t;
	t__t = *ft_lstnew(str);
	printf("%s", t__t.content);
}