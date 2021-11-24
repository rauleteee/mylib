#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*aux;
	size_t	i;

	aux = ft_calloc(ft_strlen(s) + 1, 1);
	i = 0;
	if (aux == 0)
		return (NULL);
	while (s[i])
	{
		aux[i] = (unsigned char)s[i];
		i++;
	}
	return (aux);
}
