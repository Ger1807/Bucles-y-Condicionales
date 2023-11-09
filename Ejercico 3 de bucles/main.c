#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaro 2 variables
    int numero, i, suma = 0;
    printf("Introduce un numero: ");
    // utilizo el scan para leer mi numero
    scanf("%d", &numero);
    //dependiendo de la variable numero la suma del for se ejecutara hasta que se cumpla la condicion
    for (i = 1; i <= numero; i++) {
        suma += i;
    }
    printf("La suma desde 1 hasta %d es: %d\n", numero, suma);
    return 0;
}
