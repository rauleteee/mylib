#include "libft.h"

void	en_positivo(int nb, int fd)
{
	if (nb >= 10)
	{
		en_positivo(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
	else
		ft_putchar_fd(nb % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = n / 10;
		en_positivo(n * -1, fd);
		ft_putchar_fd(8 + '0', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		en_positivo(n * -1, fd);
	}
	else
		en_positivo(n, fd);
}
