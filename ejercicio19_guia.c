#include <stdio.h>

int main(){

    float lado1,lado2,hipotenusa;
    printf("Ingrese el valor en centimetros de ambos de sus lados conocidos: ");
    scanf("%f\n%f",&lado1,&lado2);
    hipotenusa=sqrt(lado1*lado1+lado2*lado2);
    printf("La hipotenusa de este triángulo vale %d centimetros",hipotenusa);
    return 0;
}