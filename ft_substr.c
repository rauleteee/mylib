#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;

	if (s == 0)
		return (0);
	aux = malloc(len + 1);
	if (start >= ft_strlen(s))
	{
		aux[0] = '\0';
		return (aux);
	}
	ft_memmove(aux, (void *)(s + start), len);
	if (aux == 0)
		return (0);
	aux[len] = '\0';
	return (aux);
}
