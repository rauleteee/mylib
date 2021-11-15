#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char b;

	b = c;
	if (b >= 0 && b <= 127)
		return (1);
	return (0);
}
