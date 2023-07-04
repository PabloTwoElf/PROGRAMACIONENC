/*DIAS DE LA SEMANA PRACTICA 7*/

#include <stdio.h>

int main () {

    int dia;

    printf("Introduzca un numero en el rango de 1-7\n");
    scanf ("%d",&dia);

    switch (dia)
    {
    case (1) :
            printf("Es Lunes ");/* code */
        break;

    case (2) :
            printf("Es Martes ");/* code */
        break;  

    case (3) :
            printf("Es Miercoles ");/* code */
        break;  

    case (4) :
            printf("Es Jueves ");/* code */
        break;

    case (5) :
            printf("Es Viernes ");/* code */
        break;

    case (6) :
            printf("Es Sabado ");/* code */
        break;

    case (7) :
            printf("Es Domingo ");/* code */
        break;
    
    default:
        printf ("El numero ingresado no es valido");
        break;
    }



   
}