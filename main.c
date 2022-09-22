#include "SelectionSort.h"
#include <stdio.h>

int main() {

    //int arreglo[] = {64, 25, 12, 22, 11};
    // int arreglo[] = {5, 27, 34, 262, 101};
    // int arreglo[] = {23, 0, 0, 65, 44};
     int arreglo[] = {6, 2, 1, 4, -1};

    int tamano = sizeof(arreglo) / sizeof(int);

    printf("\nArreglo sin ordenar:\n");
    imprimirArreglo(arreglo, tamano);

    selectionSort(arreglo, tamano);

    printf("\nArreglo ordenado:\n");
    imprimirArreglo(arreglo, tamano);

    return 0;
}
