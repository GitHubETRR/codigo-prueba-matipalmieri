#include <stdio.h>
#include pi=3.14

int main(){
    float area,radio;
    printf("Ingrese el radio tu circulo: ");
    scanf("%f",&radio);
    area=pi*radio*radio;
    printf("El area de tu circulo es igual a %f metros cuadrados",area);
    return 0;
}