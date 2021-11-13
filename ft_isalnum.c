#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

int	ft_isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (c);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == '0' || ft_isalpha(c) == '0')
		return (c);
	return (0);
}
