#include "libft.h"

int numb(int n);
void	ft_rev_int_tab(char *tab, int size);
void	ft_swap(char *a, char *b);
char	*intToChar(int neg);

char *ft_itoa(int n)
{
	char	*aux;
	size_t	i;
	size_t	neg;

	i = 0;
	neg = 0;
	aux = malloc(numb(n));
	if (n > 0)
		aux = intToChar(n);
	if (n < 0)
	{
		neg = n * (-1);
		aux = intToChar(neg);
		aux[ft_strlen(aux)] = '-';
	}
	ft_rev_int_tab(aux, ft_strlen(aux));
	return (aux);
}
char	*intToChar(int neg)
{
	char	*aux;
	size_t	i;

	i = 0;
	aux = malloc(numb(neg));
	while(neg)
	{
		aux[i++] = (neg % 10 + '0');
		neg = neg / 10;
	}
	aux[i] = '\0';
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
	while (positive <= mitad)
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


int main(void)
{
	int n = 100;
	int n2= -999999999999999;
	char c[] = "Hola";
	printf("Resultado de la función para n: %s\n", ft_itoa(n));
	printf("Resultado de la función para n2: %s\n", ft_itoa(n2));
	printf("Resultado de la función para n2: %s\n", c);
}