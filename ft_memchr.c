#include "libft.h"
void	*ft_strchrMod(char *s, int c, size_t n)
{
	size_t	count;
	char	*aux;

	count = 0;
	aux = (char *)s;
	while (count < n)
	{
		if ((unsigned char)aux[count] == (unsigned char)c)
			return ((void *)&aux[count]);
		count++;
	}
	return (0);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	if(s == 0 && c == 0 && n == 0)
		return (0);
	return ((void *)ft_strchrMod((char *)s, c, n));
}
