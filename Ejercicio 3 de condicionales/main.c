#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarams variable
    int numero;
    printf("Escriba el numero:");
    //escanemos los datos
    scanf("%d",&numero);
    //utilizamos 2 ifs para evaluar todas las posiblidades e imprimiendo de acorde a ello
    if(numero%2 == 0){
        printf("El numero es par");
    }
    else{
        printf("El numero es impar");
    }
    if(numero == 0){
        printf("\nEl numero es 0");
       }
    return 0;
}
