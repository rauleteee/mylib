#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int main(void)
{
	const char c[] = "-197DEF";
	printf("La cadena convertida a int por la funcion original es: %i", atoi(c));
	printf("\n");
	printf("La cadena convertida a int por la funcion clonada es: %i", ft_atoi(c));
}