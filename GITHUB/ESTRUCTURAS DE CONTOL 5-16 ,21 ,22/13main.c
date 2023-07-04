/*PRACTICA 13 HABITACIONES HOTEL */
#include <stdio.h>

int main() {
    int informacion[3][4] = {{1, 120, 150, 220}, {2, 130, 160, 230}, {3, 100, 120, 200}};
    int sumatb = 0, sumtm = 0, sumata = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 4; j++) {  // Corrección: j < 4 para recorrer las columnas 1, 2 y 3
            if (j == 1) {
                sumatb = sumatb + informacion[i][j];
            }
            if (j == 2) {
                sumtm = sumtm + informacion[i][j];
            }
            if (j == 3) {
                sumata = sumata + informacion[i][j];
            }
        }
    }

    float promediotmb = (float)sumatb / 3;  // Corrección: Convertir a float para obtener el promedio decimal
    float promediotm = (float)sumtm / 3;
    float promediotma = (float)sumata / 3;

    printf("Promedio temporada baja: %0.2f\nPromedio temporada media: %0.2f\nPromedio temporada alta: %0.2f\n",
           promediotmb, promediotm, promediotma);

    return 0;
}
