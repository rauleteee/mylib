#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*aux;

	j = 0;
	aux = ft_calloc(len + 1, 1);
	if (aux == s)
		return (aux);
	if (s == 0)
		return (0);
	ft_memmove(aux, s + start, len);
	aux[len] = '\0';
	return (aux);
}

int main(void)
{
	char c[] = "lorem ipsum dolor sit amet";
	printf("Funcion clonada: %s", ft_substr(c,0,42000));
}