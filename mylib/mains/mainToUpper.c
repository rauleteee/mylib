#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int	c);
int	ft_tolower(int	c);

int main(void){
	//funcion toupper
	printf("FUNCION ORIGINAL DE TOUPPER--------------------");
	printf("\n");
	int c = 98;
	printf(" %c La letra convertida a Mayuscula es  : %c " , c, toupper(c));
	printf("\n");
	printf("FUNCION CLONADA DE TOUPPER--------------------");
	printf("\n");
	printf(" %c La letra convertida a Mayuscula es  : %c " , c, ft_toupper(c));
	printf("\n");printf("\n");printf("\n");	

	//funcion tolower
	printf("FUNCION ORIGINAL DE TOLOWER--------------------");
	printf("\n");
	int b = 67;
	printf(" %c La letra convertida a Minuscula es  : %c " , b, tolower(b));
	printf("\n");
	printf("FUNCION CLONADA DE TOLOWER--------------------");
	printf("\n");
	printf(" %c La letra convertida a Minuscula es  : %c " , b, ft_tolower(b));
}