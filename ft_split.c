#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*subStr;
	size_t	N;
	size_t	i;
	//N= number of substrings
	N = sepCounter(s, c);
	//first, memory allocation
	result = malloc((N + 1) * sizeof (*result));

}

static	int sepCounter(char const *s, char c)
{
	char	found;
	int		i;
	int		j;

	found = c;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (found == c && s[i] != c)
			j++;
		found = s[i];
		i++;
	}
	return (j);
}

static	char	*smallMaker(char	const *s, char c)
{
	char	*small;
	//delimitador para donde comenzar la nueva string
	int		i;
	int		j;

	i = 0;
	j = 0;
	small = malloc (ft_strlen(small) + 1);
	while (s[i] != c)
		i++;
	i = j;
	while (i)
	{
		small[i--] = s[j--];
	}
	small [ft_strlen(small)] = '\0';
	return (small);
}

static	char	fillUp(char const **s, char *small)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (s[i][j])
	{
		j = 0;
		while (s[i][j])
		{
			s[i][j] = small [k];
		}
	}
}