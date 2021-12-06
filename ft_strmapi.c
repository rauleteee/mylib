#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = malloc((ft_strlen(s) + 1) * sizeof(char *(unsigned int, char)));
	if (aux == 0)
		return (0);
	while (s[i])
	{
		aux[i] = f(i, *(char *)&s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}