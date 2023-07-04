/*RESERVA DINAMICA DE UNA ESTRUCTURA */
#include <stdio.h>
#include <stdlib.h>

struct producto {
    int codigo;
    char descripcion[50];
    float precio;
};

int main() {
    struct producto *prod;
    prod = malloc(sizeof(struct producto));

    printf("Introduce el código: ");
    scanf("%d", &prod->codigo);
    printf("Introduce la descripción: ");
    scanf("%s", prod->descripcion);
    printf("Introduce el precio del artículo: ");
    scanf("%f", &prod->precio);

    printf("Código del artículo: %d\n", prod->codigo);
    printf("Descripción del artículo: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);

    free(prod);
    prod=NULL;

    return 0;
}
