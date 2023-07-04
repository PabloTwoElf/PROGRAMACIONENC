/*PRACTICA 20 SUMA NUMEROS DE FICHERO*/
#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("numeros.txt", "r");
    int suma = 0, numero;

    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (feof(f) == 0) {
        fscanf(f, "%d", &numero);
        suma += numero;
    }

    printf("La suma de todos los numeros del fichero es: %d\n", suma);
    fclose(f);

    return 0;
}
