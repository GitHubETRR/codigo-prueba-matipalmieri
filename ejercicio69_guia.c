/*69.	Desarrollar una función de encabezado int ordenarMayor(int* v1, int* v2, int*v3) en la que la 
función ponga en V1 el menor valor de las tres variables, en v2 el del medio y en v3 el mayor. Noten 
el encabezado y el nombre de la función (que haga lo que el nombre de la función dice que hace).*/

#include <stdio.h>
#include <math.h>

int ordenarMayor(int *v1, int *v2, int *v3);

int main() {
    int v1, v2, v3;
    printf("Ingresa los 3 valores: \n");
    scanf("%d %d %d", &v1, &v2, &v3);
    ordenarMayor(&v1, &v2, &v3);
    printf("El mayor es %d, el intermedio es %d y el menor es %d\n", v3, v2, v1);
    return 0;
}

int ordenarMayor(int* v1, int* v2, int* v3) {
    int a = *v1, b = *v2, c = *v3;
    if (a > c && c > b) {
        *v3 = a;
        *v2 = b;
        *v1 = c;
    } 
    else if (a > b && b > c) {
        *v3 = a;
        *v2 = c;
        *v1 = b;
    } 
    else if (b > a && a > c) {
        *v3 = b;
        *v2 = a;
        *v1 = c;
    } 
    else if (b > c && c > a) {
        *v3 = b;
        *v2 = c;
        *v1 = a;
    } 
    else if (c > a && a > b) {
        *v3 = c;
        *v2 = a;
        *v1 = b;
    } 
    else {
        *v3 = c;
        *v2 = b;
        *v1 = a;
    }
}