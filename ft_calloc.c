#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*i;
	size_t	totalSize;

	totalSize = nmemb * size;
	if (!(i = malloc(totalSize)))
		return (0);
	ft_bzero(i, totalSize);
	return i;
}
