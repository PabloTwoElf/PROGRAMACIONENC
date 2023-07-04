/*PRACTICA 12 MAXIOMO Y MINIMO */
#include <stdio.h>

int main() {
    int vector[10] = {4, 7, 9, 75, -5, 6, 12, -10, 0, 1};
    int maximo = vector[0];
    int minimo = vector[0];

    for (int i = 1; i < 10; i++) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        }

        if (vector[i] < minimo) {
            minimo = vector[i];
        }
    }

    printf("El valor máximo es: %d\n", maximo);
    printf("El valor mínimo es: %d\n", minimo);

    return 0;
}
