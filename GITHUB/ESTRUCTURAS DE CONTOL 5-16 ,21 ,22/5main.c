/*PRACTICA 5 CALIFICACIONE ALUMNADOS */
#include <stdio.h>

int main() {
    int nota;
    printf("Ingrese la nota del alumno: \n");
    scanf("%d", &nota);

    if (nota < 5) {
        printf("SUSPENSO\n");
    } else if (nota == 6) {
        printf("BIEN\n");
    } else if (nota == 7 || nota == 8) {
        printf("NOTABLE\n");
    } else if (nota == 9 || nota == 10) {
        printf("EXCELENTE\n");
    }
    else {
        printf ("La nota ingresada no es valida");
    }


    return 0;
}
