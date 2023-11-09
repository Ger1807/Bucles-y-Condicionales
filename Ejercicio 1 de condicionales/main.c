#include <stdio.h>
#include <stdlib.h>
int main() {
    //utilizo int para declarar mi variable
    int zapatos;
    //y aqui uso float por si mis variables terminan en numeros decimales ya que si tienen chances de que sea asi
    float total, descuento;
    printf("Cuantos zapatos fueron comprados?: ");
    //scaneo mi primera variable
    scanf("%d", &zapatos);
    //le damos valor a la variable total
    total = zapatos * 80;
    //comenzamos con los if para determinar cuanto descuento depiendo de la cantidad de zapatos comprados
    if (zapatos > 10 && zapatos <= 20) {
        descuento = total * 0.10;
    } else if (zapatos > 20 && zapatos <= 30) {
        descuento = total * 0.20;
    } else if (zapatos > 30) {
        descuento = total * 0.40;
    } else {
        descuento = 0;
    }
    //aqui le aplicamos el descuento que nos arrojan nuestros ifs
    total = total - descuento;
    printf("El total con descuento es de: $%.2f\n", total);
    return 0;
}


