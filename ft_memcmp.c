#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			c;
	unsigned char	*auxS1;
	unsigned char	*auxS2;


	c = 0;
	auxS1 = (unsigned char *)s1;
	auxS2 = (unsigned char *)s2;

	while (c < n)
	{
		if (auxS1[c] != auxS2[c])
			return ((unsigned char)auxS1[c] - (unsigned char)auxS2[c]);
		c++;
	}
	return (0);
}
