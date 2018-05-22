#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* y;

    y=malloc(sizeof(int));
    *y=9;

    printf("\nDireccion de Memoria del Puntero Y en el stack: %d", &y);
    printf("\n========================================================\n");
    printf("\nDireccion de Memoria del Puntero Y en el Heap: %d", y);
    printf("\n========================================================\n");
    printf("\nValor real del Puntero Y:  %d", *y);
    printf("\n========================================================\n");



    return 0;
}
