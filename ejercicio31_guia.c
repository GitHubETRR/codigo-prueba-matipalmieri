#include <stdio.h>
#include <math.h>

int main(){
    int entero1,entero2;
    printf("Ingrese el primer número entero: ");
    scanf("%d",&entero1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d",&entero2);
    if(entero1==entero2){
        printf("Los números que ingresaste son iguales.");
    }
    else if(entero1/=entero2){
        printf("Los números que ingresaste no son iguales.");
    }
    return 0;
}