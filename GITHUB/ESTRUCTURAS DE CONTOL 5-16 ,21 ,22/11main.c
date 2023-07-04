 /*PRACTICA 11 VECTOR DE PESOS */
 #include <stdio.h>

int main() {
    float pesos[5];
    float suma = 0;
    

    for (int i = 0; i < 5; i++) {
        printf("Introduzca un peso para almacenarlo: ");
        scanf("%f", &pesos[i]);

        suma = suma + pesos[i];
    }

    float promedio = suma / 5;
    int contm = 0;
    int contn = 0;

    for (int i = 0; i < 5; i++) {
        if (pesos[i] >= promedio) {
            contm++;
        } else {
            contn++;
        }
    }
    printf ("El promedio de pesos es %f\n",promedio);
    printf("Número de pesos mayores o iguales al promedio: %d\n", contm);
    printf("Número de pesos menores al promedio: %d\n", contn);

    return 0;
}
