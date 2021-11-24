#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*i;
	size_t	j;

	j = 0;
	if (nmemb == '0' || size == '0')
	{
		return (0);
	}
	i = malloc(nmemb * size);
	ft_bzero(i, nmemb);
	return ((void *)i);
}
