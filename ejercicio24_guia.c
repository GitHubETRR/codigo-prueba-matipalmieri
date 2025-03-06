#include <stdio.h>

float const pi=3.14;

int main(){
    float radio,altura,area,volumen;
    printf("Ingrese primero el radio y luego la altura de tu cilindro: ");
    scanf("%f%f",&radio,&altura);
    area=pi*radio*radio;
    volumen=altura*area;
    printf("El área de tu cilindro es de %f metros cuadrados, y el volumen es de %f metros cúbicos.",area,volumen);
    return 0;
}