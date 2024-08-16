/*Desarrollar una función de encabezado int ordenarMayor(int* v1, int* v2, int*v3) en la que la función 
ponga en V1 el menor valor de las tres variables, en v2 el del medio y en v3 el mayor. Noten el encabezado
 y el nombre de la función (que haga lo que el nombre de la función dice que hace).*/

#include <stdio.h>
#include <math.h>

int ordenarMayor(int v1, int v2, int v3);

int main(){
    int *a,*b,*c;
    printf("Ingrese el valor de las tres variables");
    scanf("%d %d %d",*a,*b,*c);
    ordenarMayor(int, int, int);
    return 0;
}
int ordenarMayor(int *a, int *b, int *c){
    int v1,v2,v3;
    if(a<b && b<c) &v3,&v2,&v1;
    else if (a<c && c<b) &v3,&v1,&v2;
    else if (b<a && a<c) &v2,&v3,&v1;
    else if (b<c && c<a) &v2,&v1,&v3;
    else if (c<a && b<a) &v1,&v2,&v3;
    else &v1,&v3,&v2;
    no esta terminado
}
