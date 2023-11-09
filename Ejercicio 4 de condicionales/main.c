#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaramos variable
    int number;
    printf("Introduce un numero: ");
    //escaneamos
    scanf("%d", &number);
    //utilizamos nuestro if para determinar si nuestra variable escaneada es positiva o negativa e imprimos de acorde a ello
    if (number > 0) {
        printf("El numero es positivo.\n");
    } else if (number < 0) {
        printf("El numero es negativo.\n");
    } else {
        printf("El numero es cero.\n");
    }
    return 0;
}
