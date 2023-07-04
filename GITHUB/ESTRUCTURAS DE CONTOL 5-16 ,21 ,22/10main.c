/*PRACTICA10 SUMA Y PROMEDIO DE VALORES */
#include <stdio.h>

int main () {

    int suma=0,contador=0,numero=-1;

    while (numero !=0)
    {
        printf("Introduce un numero\n");/* code */
        scanf("%d",&numero);
        contador++;
        suma+=numero;
    }

    float promedio = suma/contador;

    printf("La suma de los numeros es %d y el promedio es %f",suma,promedio);
    



    return 0;
}