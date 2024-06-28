
#include <stdio.h>
int main(){
    float lado1,lado2,area,perimetro;
    printf("Ingrese los valores de los dos lados de su rectángulo: ");
    scanf("%f%f",&lado1,&lado2);
    area=lado1*lado2;
    perimetro=lado1*2+lado2*2;
    printf("Su rectángulo tiene una superficie de %f\n",area);
    printf("Además, su perímetro es de %f",perimetro);
    return 0;
}