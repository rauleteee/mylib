#include "libft.h"
#include <stdio.h>
 void *ft_memmove(void *dest, const void *src, size_t n)
 {
	unsigned char	*aux;
	unsigned char	*aux1;
	size_t	i;

	aux = (unsigned char *)dest;
	aux1 = (unsigned char *)src;
	i = 0;
	if (aux1 < aux)
	{
		while (i < n)
		{
			aux[n - 1 - i] = aux1[n - 1 - i];
			i++;
		}
	}
	ft_memcpy(aux, aux1, n);
	return ((void*)aux);
 }
