#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;

	new = 0;
	aux = malloc(sizeof(t_list));
	if (aux == 0)
		return (0);
	if (!lst || !f)
		return (0);
	while (lst)
	{
		aux->content = f(lst->content);
		aux->next = NULL;
		if (!aux)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}