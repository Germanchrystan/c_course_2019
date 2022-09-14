#include <stdio.h>

int main()
{
	/* Defino 2 cadenas (string's) de 10 + 1 caracteres...
	   10 + 1 caracteres por el caracter '\0' (caracter nulo de fin de cadena). */
	char s1Cadena[11] = "Programo C";
	char s2Cadena[11] = "Programo C";
	
	// Variables auxiliares...
	char cByte, i;
	
	printf("s1Cadena: %s", s1Cadena);
	printf("\ns2Cadena: %s", s2Cadena);
	
	printf("\nFor #1: ");
	
	for (i = 0; i < 11; i++)
	{
		cByte = s1Cadena[i];
		printf("%c", cByte);
	}
	
	printf("\nFor #2: ");
	
	for (i = 0; i < 11; i++)
	{
		cByte = s2Cadena[i];
		printf("%c", cByte);
	}
	
	// Fin Programa...
	return 0;
}
