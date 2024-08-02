/*47. Desarrollar un algoritmo que ingrese números hasta ingresar un número negativo, se pide mostrar 
por pantalla el promedio.*/
#include <stdio.h>
#include <math.h>
int main(){
    
    float numero,total,promedio;
    int counter;

    printf("Ingresar un numero cualquiera: ");
    scanf("%f",&numero);
    while(numero>=0){
        total+=numero;
        counter++;
        printf("Ingrese otro numero: ");
        scanf("%f",&numero);
    }
   if (counter>0){
      promedio=total/counter;
      printf("El promedio es: %f", promedio);
   }else{
      printf("No ingresaste ningun numero positivo");
   }
    return 0;
}
