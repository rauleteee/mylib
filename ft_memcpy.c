#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*aux;
	char	*aux1;
	size_t	i;
	size_t	j;

	aux = (char *)dest;
	aux1 = (char *)src;
	i = 0;
	j = 0;
	while (i < n)
	{
		aux[i++] = aux1[j++];
	}
	return ((void *)aux);
}
