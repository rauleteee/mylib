#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;
	
	list = malloc(sizeof(t_list));
	if (list == 0)
		return (0);
	list -> content = (void *)content;
	list -> next = NULL;
	return (list);
}