/*PRACTICA NUMERO 4 CONVERSOR DE DIVISAS*/

#include <stdio.h>

int main() {
    float euros;
    float dolares;

    printf("Introduce la cantidad de euros que quieres convertir: ");
    scanf("%f", &euros);

    // Convertir euros a dólares (tipo de cambio aproximado)
    dolares = euros * 1.13;

    printf("%.2f euros equivale a %.2f dolares\n", euros, dolares);

    return 0;
}
