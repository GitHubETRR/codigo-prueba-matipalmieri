#include <stdio.h>
#include <math.h>

int main(){
    int numero,checkeo;
    printf("Ingrese un número entero: ");
    scanf("%d",&numero);
    checkeo=numero%2;
    if(checkeo==0){
        printf("El número que ingresaste es par.");
    }
    else if(checkeo==1){
        printf("El número que ingresaste es impar.");
    }
    return 0;
}