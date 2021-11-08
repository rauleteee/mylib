
#include <stdio.h>
#include <unistd.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	main(void)
{
	printf("\n");
	printf("----FUNCIÓN ORIGINAL STRLCAT----\n");
	char src[] = "Hola buenas";
	char dest[25] = "bu";
	printf("String en el que vamos a copiar  = %s\n",dest);
	printf("String que vamos a copiar en dest= %s\n",src);
	unsigned int f = strlcat(dest, src, 4);
	printf("Resultado de la copia = %s\n", dest);
	printf("Length de src = %i\n", f);
	printf("\n");

	printf("----FUNCIÓN CLONADA FT_STRLCAT----\n");
	char src1[] = "Hola buenas";
	char dest1[25] = "bu";
	printf("String en el que vamos a copiar  = %s\n",dest1);
	printf("String que vamos a copiar en dest= %s\n",src1);
	unsigned int f1 = ft_strlcat(dest1, src1, 4);
	printf("Resultado de la copia = %s\n", dest1);
	printf("Length de src = %i\n", f1);
}