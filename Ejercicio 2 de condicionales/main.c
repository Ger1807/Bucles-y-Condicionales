#include <stdio.h>
#include <stdlib.h>

int main()
{
    //utilizo float porque como son notas pueden existir decimales
    float notaone, notato, notatrie, promedio;
    printf("Introduce la primera nota: ");
    scanf("%f", &notaone);
    //scaneamos la 1era
    printf("Introduce la segunda nota: ");
    scanf("%f", &notato);
    //la 2da
    printf("Introduce la tercera nota: ");
    scanf("%f", &notatrie);
    //y la 3era
    promedio = (notaone + notato + notatrie) / 3;
    //denotamos que operacion usamos para el promedio en este caso una division entre 3
    if (promedio >= 10) {
            //y de cuanto es el limite ademas de ponerlo prueba con el if
        printf("El estudiante ha sido aprobado con un promedio de: %.2f\n", promedio);
    } else {
        printf("El estudiante fue reprobado con un promedio de: %.2f\n", promedio);
    }
    return 0;
}
