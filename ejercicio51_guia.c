/*51.	Desarrollar un algoritmo que ingrese un entero positivo, y muestre por pantalla 
la suma de sus cifras.*/
#include <stdio.h>
#include <math.h>
int main(){
    int numero,i,suma;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&numero);
    if(numero>0){
        while(numero>0){
            suma+=numero%10;
            numero/=10;
        }
        printf("La suma de las cifras es:  %d\n",suma);
    }
    else printf("El numero ingresado no es un entero positivo.\n");
    return 0;
}