#include <stdio.h>

int main()
{
	// Defino un array de int's!
	int aValores[10], i;
	
	// Ingreso de Valores...
	for (i = 0; i < 10; i++)
	{
		printf("\nIngrese Valor:");
		/* Al ser un array de int's:
		   La #1 variable de aValores es aValores[0] (int)...
		   Por lo que el sizeof(aValores),
		   practicamente es de: sizeof(int) * 10...
		   y aValores no es el valor, ya que es un array;
		   y es la primera posicion de memoria del array,
		   por lo que en vez de escribir &aValores,
		   escribo aValores, y:
		   Le sumo una unidad y me muevo a la #2 posicion...
		   Le sumo dos unidades y me muevo a la #3 posicion...
		   Y etc... */
		scanf("%d", aValores + i);
	}
	
	// Resultado de Valores...	
	for (i = 0; i < 10; i++)
	{
		printf("\nValor %d: %d", i, aValores[i]);
	}
	
	// Fin Programa...
	return 0;
}
