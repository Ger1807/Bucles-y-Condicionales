#include <stdio.h>
#include <stdlib.h>

int main() {
    //ejerciocio muy parecido al patron anterior solo que la pendiente descendia desde lo mas alto y en este es al contrario
    int i, j;
    //utilizamos la resta para que mi variable j realize las operaciones hasta que mi condicion se cumpla
    for (i = 5; i >= 1; i--){
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

