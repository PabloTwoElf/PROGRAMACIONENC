/*PRACTICA 15 BUSCAR UN CARACTER EN UNA CADENA */
#include <stdio.h>

int main () {

    char cadena[50];
    char caracter;

    printf ("Introduce la cadena \n");
    gets(cadena);
    printf("Introduce un Caracter \n");
    caracter = getchar();
    
    int i=0;
    int post=0;

    while (cadena [i] !='\0'&& post ==-1)
    {
        if (cadena [i] == caracter )
        {
            post= i;

        }
        i = i+1;

        
    }
    
    if (post!= -1)
    {
       printf ("El caracter %c se encuenta en la cadena %s en la posicion %d", caracter,cadena,post);

    }
    else
    {
        printf("El caracter %c no se encuentra en la cadena %s",caracter, cadena);
    }
    
    
    


    return 0;
}