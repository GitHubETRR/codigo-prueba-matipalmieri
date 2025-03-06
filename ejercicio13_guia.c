#include <stdio.h>

int main (){
    float precio,kilos,dolares;
    printf("¿Cuál es el precio en dólares por kilo? ");
    scanf("%f",&dolares);
    printf("¿Y cuantos kilos compraste? ");
    scanf("%f",&kilos);
    precio=kilos*dolares;
    printf("En total, gastaste %f dólares",precio);
    return 0;
}