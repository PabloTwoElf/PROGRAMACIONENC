/*PRACTICA 22 ENTRADAS DE UN MUSEO*/
#include <stdio.h>

struct hora_entrada {
    int hora;
    int minuto;
};

struct entrada {
    struct hora_entrada hora1;
    int asistentes;
    float precio;
};

int main() {
    struct entrada el;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("Introduzca la hora de entrada: ");
        scanf("%d", &el.hora1.hora);

        printf("Introduzca el minuto de entrada: ");
        scanf("%d", &el.hora1.minuto);

        printf("Introduzca el número de asistentes: ");
        scanf("%d", &el.asistentes);

        int total = 0;

        for (int i = 0; i < el.asistentes; i++) {
            int edad;
            printf("Introduce la edad del asistente %d: ", i + 1);
            scanf("%d", &edad);

            if (edad < 6) {
                total = total + 0;
            } else if (edad >= 6 && edad <= 15) {
                total = total + 5;
            } else if (edad >= 16 && edad <= 26 || edad > 65) {
                total = total + 8;
            } else {
                total = total + 10;
            }
        }

        if (el.asistentes >= 5) {
            el.precio = total - total * 0.1;
        } else {
            el.precio = total;
        }
        
        printf ("Hora de entrada del grupo %d\n",el.hora1.hora);
        printf ("Minuto de entrada del grupo %d\n",el.hora1.minuto);
        printf ("Precio de las entradas del grupo  %0.2f\n",el.precio);
        
        printf("Quiere continuar con otro grupo (S/N): ");
        scanf(" %c", &continuar);
    }

    printf("Regrese pronto.\n");

    return 0;
}
