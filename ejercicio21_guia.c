#include <stdio.h>

int main(){
    int dias,meses,years,fecha;
    printf("Introduce una fecha en el formato DDMMAAAA: ");
    scanf("%d",&fecha);
    dias=fecha/1000000;
    meses=(fecha%1000000)/10000;
    years=fecha%10000;
    printf("La fecha ingresada es el dia %d del mes %d del año %d", dias,meses,years);
    return 0;
}