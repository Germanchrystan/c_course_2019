#include<stdio.h>
/*Ejercicio: Crear un programa en el cual se ingresen 3 valores, y se muestren por orden descendente los mismos:
Luego teniendo en cuenta el orden original:
1. Multiplicar el 1 con el 2
2. Restar el 3 con 1
4 Dividir el 2 con el 1+3 (mostrar decimales)
5. Finalizar programa con un getch()*/

int row[3];
int ordrow[3];
int main (){
	
	int i;
	for (i=0;i<3;i++)
	{
		printf("\nIngrese el valor %d\n",row[i]);
		scanf("%d",&row[i]);
	
	}


//Chequeando cual es el n�mero Mayor
if(row[0]>row[1]&&row[0]>row[2]){
	ordrow[0]=row[0];
}
 else if(row[1]>row[0]&&row[1]>row[2]){
 	ordrow[0]=row[1];
 }
 else{
 	ordrow[0]=row[2];
 };
//Chequeando cual es el n�mero menor
if(row[0]<row[1]&&row[0]<row[2]){
	ordrow[2]=row[0];
}
 else if(row[1]<row[0]&&row[1]<row[2]){
 	ordrow[2]=row[1];
 }
 else{
 	ordrow[2]=row[2];
 };
//Chequeando cual es el n�mero intermedio
if(row[0]!=ordrow[0]&&row[0]!=ordrow[2]){
	ordrow[1]=row[0]; 
	}
else if(row[1]!=ordrow[0]&&row[1]!=ordrow[2]){
	ordrow[1]=row[1]; 
	}
else {
	ordrow[1]=row[2];
}

printf("\nAqu� est�n los valores ordenados de Mayor a menor:\n");
for (i=0;i<3;i++){
	printf("\n%d",ordrow[i]);
}




	
	printf("\nSus n�meros en el orden original son: ");
	for (i=0;i<3;i++){
		printf("\n%d",row[i]);
	}

printf("\nLa Multiplicaci�n del 1 y el 2 es: %d",row[0]*row[1]);
printf("\nLa Resta del 3 con el 1 es: %d",row[2]-row[0]);
printf("\nLa Divisi�n del 2 con la suma del 1+3 es: %f",(float)row[1]/(row[0]+row[2]));
printf("\nPrograma finalizado, presione una tecla para finalizar");
getch();


return 0;
}






