#include <stdio.h>

int main(){
    float celcius,fahrenheit;
    printf("Ingrese su temperatura en grados Celcius: ");
    scanf("%f",&celcius);
    fahrenheit=celcius*1.8+32;
    printf("Su temperatura equivale a %f°F",fahrenheit);
    return 0;
}