/*PRACTICA 16 JUGADORES DE UN EQUIPO DE FUTBOL*/
#include <stdio.h>
#include <string.h>

struct jugador {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct jugador jugadores[5];

    for (int i = 0; i < 5; i++) {
        printf("Introduce el nombre del jugador %d: ", i + 1);
        scanf("%s", jugadores[i].nombre);
        printf("Introduce la edad del jugador %d: ", i + 1);
        scanf("%d", &jugadores[i].edad);
        printf("Introduce la altura del jugador %d: ", i + 1);
        scanf("%f", &jugadores[i].altura);
    }

    int opcion = -1;

    while (opcion != 0) {
        printf("\nIntroduce la opción que desea realizar:\n");
        printf("1. Listar jugadores\n");
        printf("2. Buscar jugador\n");
        printf("3. Jugador más alto\n");
        printf("0. Salir\n");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("\n--- Listado de jugadores ---\n");
            for (int i = 0; i < 5; i++) {
                printf("Jugador %d:\n", i + 1);
                printf("Nombre: %s\n", jugadores[i].nombre);
                printf("Edad: %d\n", jugadores[i].edad);
                printf("Altura: %.2f\n", jugadores[i].altura);
                printf("\n");
            }
        }
        else if (opcion == 2) {
            char nombre[50];
            printf("\nIntroduce el nombre del jugador que deseas buscar: ");
            scanf("%s", nombre);
            int encontrado = 0;

            for (int i = 0; i < 5; i++) {
                if (strcmp(jugadores[i].nombre, nombre) == 0) {
                    encontrado = 1;
                    printf("\n--- Jugador encontrado ---\n");
                    printf("Nombre: %s\n", jugadores[i].nombre);
                    printf("Edad: %d\n", jugadores[i].edad);
                    printf("Altura: %.2f\n", jugadores[i].altura);
                    break;
                }
            }

            if (encontrado == 0) {
                printf("\nJugador no encontrado.\n");
            }
        }
        else if (opcion == 3) {
            float mayorAltura = jugadores[0].altura;
            char nombreMayorAltura[50];
            strcpy(nombreMayorAltura, jugadores[0].nombre);

            for (int i = 1; i < 5; i++) {
                if (jugadores[i].altura > mayorAltura) {
                    mayorAltura = jugadores[i].altura;
                    strcpy(nombreMayorAltura, jugadores[i].nombre);
                }
            }

            printf("\n--- Jugador más alto ---\n");
            printf("Nombre: %s\n", nombreMayorAltura);
            printf("Altura: %.2f\n", mayorAltura);
        }
    }

    return 0;
}
