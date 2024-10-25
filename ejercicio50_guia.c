/*50.	Desarrollar un algoritmo que ingrese un número entero positivo y muestre por pantalla todos 
sus divisores.*/
#include <stdio.h>
#include <math.h>
int main(){
    int numero,i,resto;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&numero);
    printf("Los divisores de %d son: ",numero);
    for(i=1;i<=numero;i++){
        if(numero%i==0) printf("%d ",i);
    }
    return 0;
}
