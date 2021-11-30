#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*i;
	size_t	j;

	j = 0;
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, nmemb);
	return ((void *)i);
}
