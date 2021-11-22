#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	c1;
	char			*aux;
	size_t			i;

	c1 = (unsigned char) c;
	aux = (char *)s;
	i = 0;
	while (i < n)
	{
		aux[i++] = c1;
	}
	return ((void *)aux);
}

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}