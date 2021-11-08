
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strnstr(char *str, char *to_find, int n);
int main(void)
{
	printf("\n");
	printf("----FUNCIÓN ORIGINAL STRSTR----\n");
	char c[] = "Foo Bar Baz";
	char to_find[] = "Bar";
	printf("String en el que vamos a buscar la subcadena  = %s\n",c);
	printf("Subcadena que vamos a buscar = %s\n",to_find);
	char *f = strnstr(c, to_find, 10);
	printf("Resultado de la búsqueda = %s\n", f);
	printf("\n");

	printf("----FUNCIÓN CLONADA FT_STRSTR----\n");
	char c1[] = "Foo Bar Baz";
	char to_find1[] = "Bar";
	printf("String en el que vamos a buscar la subcadena  = %s\n",c1);
	printf("Subcadena que vamos a buscar = %s\n",to_find1);
	char *f1 = ft_strnstr(c1, to_find1, 10);
	printf("Resultado de la búsqueda = %s\n", f1);
	printf("AUN NO FUNCIONA BIEN")	
}