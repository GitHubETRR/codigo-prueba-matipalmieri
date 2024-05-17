#include <stdio.h>
int main(){

    float area,perimetro,lado;
    printf("Ingrese el área de su cuadrado en metros: ");
    scanf("%f",&area);
    lado=sqrt(area);
    perimetro=lado*4;
    printf("El perímetro de este cuadrado es de %f metros",perimetro);
    return 0;
}