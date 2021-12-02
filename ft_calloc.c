#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*i;

	i = malloc(nmemb * size);
	if (i == 0)
		return (0);
	ft_bzero(i, nmemb);
	return (i);
}
