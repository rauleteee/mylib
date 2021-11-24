#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t	*i;
	if (nmemb == '0' || size == '0')
	{
		return (0);
	}
	i = malloc(nmemb * size);
	free(i);
	return((void *)i);


}