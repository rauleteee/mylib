#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (ft_lstsize(lst) == 0)
		return (0);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}