#include "SelectionSort.h"
#include <stdio.h>

int main() {

    int arreglo[] = {64, 25, 12, 22, 11};
    int tamano = sizeof(arreglo) / sizeof(int);

    printf("\nArreglo sin ordenar:\n");
    imprimirArreglo(arreglo, tamano);

    selectionSort(arreglo, tamano);

    printf("\nArreglo ordenado:\n");
    imprimirArreglo(arreglo, tamano);

    return 0;
}
