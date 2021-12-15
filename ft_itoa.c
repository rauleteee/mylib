#include "libft.h"

int		numb(int n);
void	ft_rev_int_tab(char *tab, int size);
void	ft_swap(char *a, char *b);
char	*intToChar(int neg);
char	*changeMin(int i);

char *ft_itoa(int n)
{
	char	*aux;
	size_t	i;
	size_t	neg;

	i = 0;
	neg = 0;
	aux = malloc(numb(n));
	if (aux == 0)
		return (0);
	if(n == -2147483648)
	{
		aux = changeMin(n);
		return (aux);
	}
	if(n < 0)
	{	
		neg = n * (-1);
		aux = intToChar(neg);
		aux[ft_strlen(aux)] = '-';
		ft_rev_int_tab(aux, ft_strlen(aux));
		aux[ft_strlen(aux) + 1] = '\0';
		return (aux);
	}
	aux = intToChar(n);
	ft_rev_int_tab(aux, ft_strlen(aux));
	return (aux);
}

char	*intToChar(int n)
{
	char	*aux;
	size_t	i;

	i = 0;
	aux = malloc(numb(n) + 1);
	if (n == 0)
	{
		aux[0] = '0';
		return (aux);
	}
	while(n)
	{
		aux[i++] = n % 10 + '0';
		n = n / 10;
	}
	aux[i] = '\0';
	return (aux);
}

char	*changeMin(int i)
{
	char	*aux;

	aux = malloc(numb(i) + 2);
	aux = intToChar(2147483647);
	aux[0] = '8';
	aux[ft_strlen(aux)] = '-';
	ft_rev_int_tab(aux, ft_strlen(aux));
	aux[ft_strlen(aux) + 1] = '\0';
	return (aux);
}

int numb(int n)
{
	int	res;

	res = 1;
	while(n / 10 != 0)
	{
		res++;
		n = n / 10;
	}
	if (n < 0)
		res = res + 1;
	return (res);

}

void	ft_rev_int_tab(char *tab, int size)
{
	int	mitad;
	int	positive;
	int	negative;

	mitad = size / 2;
	positive = 0;
	if (size <= 0)
		return ;
	negative = size - 1;
	while (positive < mitad)
	{
		ft_swap(&tab[positive], &tab[negative]);
		positive++;
		negative--;
	}
}

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}
