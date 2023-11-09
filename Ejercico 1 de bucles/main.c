#include <stdio.h>
#include <stdlib.h>

int main() {
    //declaro mi variable y la llamo "g"
    int g = 1;
    // aqui le indico al programa que mientras g sea menor o igual a 10 imprima los numeros del 1 al 10
    while (g <= 10) {
        //ademas uso salto de linea para que cada numero este en una linea diferente
        printf("%d\n", g);
        g++;
    }
    return 0;
}
