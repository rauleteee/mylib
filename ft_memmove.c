#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux1;
	size_t			i;
	size_t			j;
	size_t			k;

	aux = (unsigned char *)dest;
	aux1 = (unsigned char *)src;
	i = 0;
	j = ft_strlen((char *)aux);
	k = ft_strlen((char *)aux1);
	if ((char *)src > (char *)dest)
		ft_memcpy(aux, aux1, n);
	else
	{
		dest = (char *)dest + n - 1;
		src = (char *)src + n - 1;
		while (n--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest - 1;
			src = (char *)src - 1;
		}
	}
	return ((void *)aux);
}
