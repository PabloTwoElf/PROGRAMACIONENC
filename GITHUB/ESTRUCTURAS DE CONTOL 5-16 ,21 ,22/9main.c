/*PRACTICC 9 ALMNUOS APROBADOS Y REPROBADOS */
#include <stdio.h>

int main () {
    

    int n,contadora=0,contadors=0;
    float nota;

    printf("Introduzca el numero de alumnos\n");
    scanf ("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);

        if (nota>=5)
        {
            contadora++;
            
        }
        else{
            contadors++;
        }
        

    }
    
    printf ("El numero de alumnos  aprobados es %d y el numero de alumnos suspenso es %d\n",contadora,contadors);
    return 0;
}