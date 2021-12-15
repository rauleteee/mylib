#include "libft.h"

static int		numb(int n);

char	*ft_itoa(int n)
{
	long int		i;
	char			*res;

	i = n;
	res = ft_calloc(numb(n) + 1, 1);
	if (!res)
		return (0);
	res = res + numb(n);
	if (n == 0)
		res[0] = '0';
	if (i > 0)
		i = -i;
	while (i)
	{
		res--;
		*res = (char)('0' - i % 10);
		i /= 10;
	}
	if (n < 0)
	{
		res--;
		*res = '-';
	}
	return (res);
}

static int	numb(int n)
{
	int	res;

	res = 1;
	while (n / 10 != 0)
	{
		res++;
		n = n / 10;
	}
	if (n < 0)
		res = res + 1;
	return (res);
}
