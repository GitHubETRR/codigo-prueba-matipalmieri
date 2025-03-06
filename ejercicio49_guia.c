/*49.	Desarrollar un algoritmo que calcule y visualice en pantalla una tabla con las 20 primeras 
potencias de 2.*/
#include <stdio.h>
#include <math.h>
int main(){
    int numero=2,potencia,i;
    for (i=0;i<=20;i++){
    potencia=pow(numero,i);
    printf("2^%d = %d \n",i,potencia);
    }
    return 0;
}

