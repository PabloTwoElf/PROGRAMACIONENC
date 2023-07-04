/*PRACTICA 21 CALCULO DE MOTORES */
#include <stdio.h>
#include <math.h>

#define PI 3.1416

struct cilindro {
    float diametro;
    float carrera;
};

struct motor {
    int identificador;
    struct cilindro cilindro1;
    int num_cilindros;
    float cilindrada;
};

int main() {
    struct motor motor1;

    printf("Introduce el identificador: ");
    scanf("%d", &motor1.identificador);
    printf("Introduce el diámetro del cilindro (mm): ");
    scanf("%f", &motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro (mm): ");
    scanf("%f", &motor1.cilindro1.carrera);
    printf("Introduce el número de cilindros: ");
    scanf("%d", &motor1.num_cilindros);

    motor1.cilindrada = motor1.num_cilindros * ((motor1.cilindro1.carrera / 10) * PI * pow(motor1.cilindro1.diametro / 10, 2)) / 4;

    printf("\n--- Motor ---\n");
    printf("Identificador: %d\n", motor1.identificador);
    printf("Diámetro del cilindro: %.2f\n", motor1.cilindro1.diametro);
    printf("Carrera del cilindro: %.2f\n", motor1.cilindro1.carrera);
    printf("Número de cilindros: %d\n", motor1.num_cilindros);
    printf("Cilindrada: %.2f\n", motor1.cilindrada);

    return 0;
}
