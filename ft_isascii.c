#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 255)
		return (c);
	return (0);
}
