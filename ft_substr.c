#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	aux = malloc(len + 1);
	ft_memmove(aux, (void *)(s + start), len);
	if (aux == 0)
		return (0);
	aux[ft_strlen(aux)] = '\0';
	return (aux);
}

