#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaramos las 2 variables que se van a comparar
    int number1, number2;
    printf("Introduce el primer numero: ");
    //escaneamos la 1era
    scanf("%d", &number1);
    printf("Introduce el segundo numero: ");
    //y la 2da
    scanf("%d", &number2);
    //y las evaluamos con nuestro if y else if e imprimos de acorde a ello
    if (number1 > number2) {
        printf("El numero %d es mayor que el numero %d\n", number1, number2);
    } else if (number1 < number2) {
        printf("El numero %d es mayor que el numero %d\n", number2, number1);
    } else {
        printf("Los numeros son iguales\n");
    }
    return 0;
}

