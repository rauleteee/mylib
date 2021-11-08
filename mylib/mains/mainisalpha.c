#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);


int main(void)
{
	printf("=====================FUNCION ISALPHA========================= \n");
	char c = 33;
	printf("el resultado de la funcion clonada es: %i", ft_isalpha(c));
	printf("\n");
	printf("el restulado de la funcion original es : %i", isalpha(c));
	printf("\n");
	printf("=====================FUNCION ISDIGIT========================= \n");
	int a = 0;
	printf("el resultado de la funcion clonada es: %i", ft_isdigit(a));
	printf("\n");
	printf("el restulado de la funcion original es : %i", isdigit(a));
	printf("\n");
	printf("el resultado de la funcion clonada es: %c", ft_isdigit(c));
	printf("\n");
	printf("el restulado de la funcion original es : %c", isdigit(c));
	printf("\n");
	printf("=====================FUNCION ISALNUM========================= \n");
	int b = 4;
	//char d =97;
	printf("el resultado de la funcion clonada es: %i", ft_isalnum('a'));
	printf("\n");
	printf("el restulado de la funcion original es : %i", isalnum('a'));
	printf("\n");
	printf("el resultado de la funcion clonada es: %c", ft_isalnum(b));
	printf("\n");
	printf("el restulado de la funcion original es : %c", isalnum(b));
	printf("\n");

}