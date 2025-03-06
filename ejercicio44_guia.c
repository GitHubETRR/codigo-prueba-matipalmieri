/*44.	Desarrollar un algoritmo que escriba por pantalla los primeros 100 números naturales.*/
#include <stdio.h>
#include <math.h>
int main(){
    int input,i;
    printf("Ingrese 1 si quiere ver en pantalla los primeros 100 numeros naturales, sino, ingrese 0 para salir: ");
    scanf("%d",&input); 
    if(input==1){
        for(i=0;i<100;i++){
            printf("%d\n",i);
        }
    }
    return 0;
}

