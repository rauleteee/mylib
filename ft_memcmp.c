#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = ft_strncmp((char *)s1, (char *)s2, n);
	return (i);
}
