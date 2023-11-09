#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaro 2 variables j e i
    int i, j;
    //utilizo el for anidados para indicarle al programa que si i es menor igual a 5 siga sumando
    //y hasta que cumple la condicion siga ejecutando mi 2do for para imprimir el patron que deseo
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

