#include <stdio.h>

float const pi=3.14;

int main(){

    float horas,antiguedad,sueldoneto,sueldo,plus;
    printf("Ingrese la cantidada de horas que trabajaste y hace cuantos años trabajas: ");
    scanf("%f%f",&horas,&antiguedad);
    sueldo=horas*4500;
    plus=((sueldo/100)*2)*antiguedad;
    sueldoneto=sueldo+plus;
    printf("Usted tiene un sueldo neto de %f dólares.",sueldoneto);
    return 0;
}