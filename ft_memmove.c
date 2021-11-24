#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*aux;
	const unsigned char	*aux1;

	aux = (unsigned char *)dest;
	aux1 = (const unsigned char *)src;
	if (aux1 > aux)
		ft_memcpy(aux, aux1, n);
	else
	{
		while(n--)
			aux[n]= aux1[n];
	}
	return (aux);
}
