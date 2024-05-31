#include <stdio.h>
#include <math.h>

int main(){
    int entero1,entero2,entero3;
    printf("Ingrese el primer número entero: ");
    scanf("%d",&entero1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d",&entero2);
    printf("Ingrese el tercer número entero: ");
    scanf("%d",&entero3);
    if(entero1>entero2 && entero2>entero3){

        printf("El número más chiquito es %d",entero3);
    }
    else if(entero1<entero2 && entero1<entero3){

        printf("El número más chiquito es %d",entero1);
        }
    else if(entero2<entero3 && entero2<entero1){
        printf("El número más chiquito es %d",entero2);
    }
    else if(entero1==entero2 && entero2==entero3){
        printf("Los tres números son iguales");
    }
    return 0;
}