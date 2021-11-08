#include <stdio.h>
#include <string.h>
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(const char *s, int c);

int main(void)
{
	char c[]= "hola buenas que tal";
	int a = 97;
	printf("FUNCION STRCHR------------------>");
	printf(" Puntero a la primera ocurrencia de c en el string: %s ", strchr(c,a));

	printf("\n");
	printf("\n");
	printf("\n");

	char y[]= "hola buenas que tal";
	int x = a;

	printf("FUNCION FT_STRCHR --------------->");
	printf("Puntero a la primera ocurrencia de c en el string: %s ", ft_strchr(y,x));
	printf("\n");

	printf("\n");
	printf("\n");
	printf("\n");
	//char c[]= "hola buenas que tal";
	int b = 110;
	printf("FUNCION STRRCHR------------------>");
	printf(" Puntero a la primera ocurrencia de c en el string: %s ", strrchr(c,b));
	printf("\n");
	printf("FUNCION FT_STRRCHR------------------>");
	printf(" Puntero a la primera ocurrencia de c en el string: %s ", ft_strrchr(c,b));

	printf("\n");
	printf("\n");
	printf("\n");

	//char y[]= "hola buenas que tal";
	//int x = a;

	//printf("FUNCION FT_STRCHR --------------->");
	//printf("Puntero a la primera ocurrencia de c en el string: %s ", ft_strchr(y,x));
}