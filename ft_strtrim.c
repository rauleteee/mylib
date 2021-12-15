#include "libft.h"

static size_t	isChar(char const *s1, char c);
static char		*removeChr(const char *s1, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	if (s1 == 0)
		return (0);
	return (removeChr(s1, set));
}

static char	*removeChr(const char *s1, const char *set)
{
	char	*aux;
	size_t	principio;
	size_t	final;
	size_t	i;
	size_t	j;

	principio = 0;
	i = 0;
	j = ft_strlen(s1) - 1;
	final = ft_strlen(s1) - 1;
	while (s1[principio] && isChar(set, s1[principio]))
		principio++;
	while (final > principio && isChar(set, s1[final]))
		final--;
	aux = ft_substr(s1, principio, final - principio + 1);
	if (aux == 0 || set == 0)
		return (0);
	return (aux);
}

static size_t	isChar(char const *s1, char c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s1))
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}
