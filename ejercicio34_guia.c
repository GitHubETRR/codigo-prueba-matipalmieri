#include <stdio.h>
#include <math.h>

int main(){
    int numero1,numero2,suma,checkeo;
    printf("Ingrese el primer número: ");
    scanf("%d",&numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d",&numero2);
    suma=numero1+numero2;
    checkeo=suma%2;
    if(checkeo==0)printf("La suma de los dos numeros es par.");
    else printf("La suma de los dos numeros es impar.");
    return 0;
}