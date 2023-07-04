/*PRACTICA 14 CADENAS ENLAZADAS*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char cadena1[50], cadena2[50], cadena3[50], cadena4[50];
    printf("Introduce la cadena 1: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0'; // Eliminar el salto de línea al final
    
    printf("Introduce la cadena 2: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0'; // Eliminar el salto de línea al final
    
    printf("Introduce la cadena 3: ");
    fgets(cadena3, sizeof(cadena3), stdin);
    cadena3[strcspn(cadena3, "\n")] = '\0'; // Eliminar el salto de línea al final
    
    printf("Introduce la cadena 4: ");
    fgets(cadena4, sizeof(cadena4), stdin);
    cadena4[strcspn(cadena4, "\n")] = '\0'; // Eliminar el salto de línea al final

    printf("%s-%s-%s-%s", cadena1, cadena2, cadena3, cadena4);

    return 0;
}

/*stdin se utiliza para leer datos de entrada desde el usuario, y sizeof
 se utiliza para obtener el tamaño en bytes de un tipo o una variable en C.*/