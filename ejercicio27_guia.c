#include <stdio.h>
#include <math.h>

int main(){

    int cifra1,cifra2,cifra3,numero;
    printf("Ingrese un número entero de 3 cifras: ");
    scanf("%d",&numero);
    cifra1=numero/100;
    cifra2=(numero%100)/10;
    cifra3=(numero%100)%10;
    printf("La cifra con menor valor del número que ingresaste es %d, la cifra del medio es vale %d y la que tiene más valor vale %d",cifra3,cifra2,cifra1);
    return 0;
}