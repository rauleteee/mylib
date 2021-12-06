#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	aux = malloc(ft_strlen(s1) + 1);
	if (aux == 0)
		return (0);
	while(s1[i])
	{
		if (ft_memcmp(s1, set, ft_strlen(s1)) != 0)
			aux[i] = s1[j];
		i++;
		j++;	
	}
	i = ft_strlen(s1);
	j = ft_strlen(set);
	k = ft_strlen(s1);
	while(k != 0)
	{
		if (s1[k] != set[j])
			aux[i] = s1[j];
		k--;
		j--;
		i--;
	}
	aux[ft_strlen(aux)] = '\0';
	return (aux);
}
// int main(void)
// {
// 	char s1[] = "hola buenas hol";
// 	char set[] = "hol";
// 	printf("Resultado de strtrim : %s\n", ft_strtrim(s1,set));
// }