#include <ncurses.h> /* ncurses.h includes stdio.h. Used for Linux */
// If we were running a MsDOS we would use conio.h instead  
int main()
{
    printf("Programa ejemplo de instrucciones!");
    printf("\nPresione cualquier tecla para continuar...\n%c", getch());

    return 0;
}
