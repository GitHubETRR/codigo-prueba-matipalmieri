/*36.	Una compañía dedicada a servicio de mensajería realiza envios al interior el costo fijo
de traslado es de $1500 si es corta distancia y 2000 si es larga distancia, luego dependerá del 
peso de la mercadería enviada, los de corta distancia si el peso supera los 20 kilos se le cobran
 $800 por cada kilo de exceso y los de larga distancia se le cobra $800, cada 5 kilos excedidos. 
 Desarrollar un algoritmo que ingrese el tipo de viaje y la cantidad de kilos y me devuelva el 
 costo del viaje.*/
#include <stdio.h>
#include <math.h>
int main(){
    int costofijo,tipo;
    float peso,costo;
    printf("Ingrese el peso de la mercadería: ");
    scanf("%f",&peso);
    while(tipo!=1 && tipo!=2){
    printf("Ingrese el tipo de viaje (1 si es corto y 2 si es largo):");
    scanf("%d",&tipo);
    if(tipo!=1 && tipo!=2){
        printf("Estas ingresando un valor inapropiado, vuelve a intentar\n");        
    }
    }
    if(tipo==1){
        costofijo=1500;
        if(peso>20){
            peso-=20;
            costo=costofijo+peso*800;
        }
        else{
            costo=costofijo;
        }
    }
    else if(tipo==2){
        costofijo=2000;
        if(peso>20){
            peso-=20;
            costo=costofijo+(peso/5)*800;
        }
        else{
            costo=costofijo;
        }
    }
    printf("El costo del viaje es de %f", costo);
    return 0;
}