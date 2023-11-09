#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero;
    //declaro una sola variable
    printf("Dame un numero:");
    //escaneo el numero y lo almaceno en mi variable ya declarada
    scanf("%d",&numero);
    //le indico al programa a travez del for que que le sume 1 a la i hasta que se cumpla la ondicion planteada
    for(int i = 0; i <= 10; i = i + 1){
        //modifico mi printf para que se impriman mi numero la i y la operacion designada en este caso la multiplicacion
        printf("%d x %d = %d\n",numero, i, i*numero);
    }
    return 0;
}
