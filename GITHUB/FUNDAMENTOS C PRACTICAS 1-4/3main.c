/*PRACTICA 3 AREA DEL TRIANGULO */

#include <stdio.h>

int main() {
    float base, altura;

    printf("Introduce la base del rectangulo: ");
    scanf("%f", &base);

    printf("Introduce la altura del rectangulo: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("El area del rectangulo de base %.2f y altura %.2f es: %.2f\n", base, altura, area);

    return 0;
}
