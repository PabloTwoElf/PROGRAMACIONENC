/*PRECIO FINAL COCHE PRACTICA 6*/
#include <stdio.h>

int main () {

    int precio_base,kilometros;
    float consumo, preciofinal;

    printf ("Introduce el precio base del vehiculo\n");
    scanf  ("%d",&precio_base);
    printf ("Ingrese el numero de kilometrso del vehiculo\n");
    scanf ("%d",&kilometros);
    printf ("Ingrese el consumo\n");
    scanf ("%f",&consumo);

    if (kilometros<20000 && consumo<=5)
    {
        preciofinal=precio_base*1.2; 
    }
    else if ( kilometros>20000 && consumo <=5)
    {
            preciofinal=precio_base*1.1;       /* code */
    }
    else if ( consumo >5)
    {
         preciofinal=precio_base*1.05; 
    }

    printf ("El precio final del vehiculo sera %f",preciofinal);
    
return 0;
    
}