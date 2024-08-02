/*46.	Desarrollar un algoritmo que, ingrese un número entero entre 0 y 10 (validar este valor) y muestre 
por pantalla la tabla de multiplicar del número ingresado.*/
#include <stdio.h>
#include <math.h>
int main(){
    int num,i;
    do{
    printf("Ingrese un numero entero del 0 al 10: ");
    scanf("%d",&num); 
    if(num<=10 && num>=0){
        for(i=0;i<11;i++){
            printf("%d x %d = %d\n",num,i,num*i);
        }
    }
    else printf("No ingresaste un numero entero del 0 al 10, vuelve a intentar:\n ");
    }while(!(num<=10 && num>=0));
    return 0;
}
