/*65.	Desarrolle la función “esBisiesto” que reciba un año por parámetro y devuelva “verdadero” 
si el año es bisiesto (Un año es bisiesto si es divisible por 400, o bien si es divisible por 
4 pero no por 100).*/

#include <stdio.h>
#include <math.h>

void esBisiesto(int);

int main(){
    int year;
    printf("Mete un año y te compruebo si es bisiesto\n");
    scanf("%d", &year);
    esBisiesto(year);
    return 0;
}

void esBisiesto(int year){
    if(year<1582){
        printf("Todavia no se había creado el calendario que conocemos\n");
    }
    else{
        if(year<1600){
            printf("Los años bisiestos se crearon despues de esa fecha\n");
        }
        else{
            if(year % 4 == 0){
                printf("Es bisiesto\n");
            }
            else{
                printf("No es bisiesto\n");
            }
        }
    }
}