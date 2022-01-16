#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*toDel;
	
	if (*lst)
	{
		while(*lst)
		{
			toDel = (*lst) -> next;
			ft_lstdelone(*lst, del);
			*lst = toDel;
		}
	}
}
