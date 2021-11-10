#include <strings.h>
#include <stdio.h>
#include <stddef.h>
int	ft_strlen(char *str);
int main(void)
{
	void *s  = "";
	char c[] = "Hola buenas que tal";
	size_t int n = strlen(c);
	printf("Funcion original bzero : ", bzero(s, n));
}