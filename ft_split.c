#include "libft.h"
static	size_t sepCounter(char const *s, char c);
static	void	freeResult(char **res, int i);
static char **makeSmall(const char *s, char c, char **res);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	N;

	N = sepCounter(s, c);
	if (!(result = malloc((N + 1) * sizeof (*result))))
		return (0);
	result = makeSmall(s, c, result);
	return (result);
}
static char **makeSmall(const char *s, char c, char **res)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	while (k < sepCounter(s, c))
	{
		j = 0;
		if (!(res[k] = malloc(sepCounter(s,c) + 1)))
			freeResult(res, k);
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			res[k][j++] = s[i++];
		res[k][j] = 0;
		k++;
	}
	res[k] = 0;
	return (res);
}

static	size_t sepCounter(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		prev;

	if (s == 0 || s[0] == 0)
		return (0);
	i = 1;
	j = 0;
	if (s[0] != c)
		j++;
	while (s[i])
	{
		prev = i - 1;
		if (s[i] != c && s[prev] == c)
			j++;
		i++;
	}
	return (j);
}
static	void	freeResult(char **res, int i)
{
	int	j;

	j = 0;
	while (j < i && res[i])
		free(res[j++]);
	free(res);
	return ;
}


