/*PRACTICA 17 MEDIA DE UN VECTOR*/
#include <stdio.h>

int main() {
    float vector[5];

    for (int i = 0; i < 5; i++) {
        printf("Introduce un número: ");
        scanf("%f", &vector[i]);
    }

    float *puntero = &vector[0];
    float media = 0;

    for (int i = 0; i < 5; i++) {
        media += *(puntero + i);
    }
    media /= 5;

    printf("La media de los valores del vector es %f\n", media);

    return 0;
}
