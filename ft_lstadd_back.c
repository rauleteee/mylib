#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	if (*lst)
	{
		final = ft_lstlast(*lst);
		final -> next = new;
	}
	else
		*lst = new;
}