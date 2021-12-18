#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sum;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (!(sum = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	while (i < ft_strlen(s1))
		sum[i++] = s1[j++];
	sum[i] = '\0';
	j = 0;
	while (i < ft_strlen(s2) + ft_strlen(s1))
	{
		sum[i++] = s2[j++];
	}
	sum[i] = '\0';
	return (sum);
}
