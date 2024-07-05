/*58.	Desarrolle la función “potencia” que reciba por parámetros un entero X y una potencia Y; y 
devuelva por resultado XY.*/ 

#include <stdio.h>

int potencia(int,int);
int pedirDatos(void);

int main() {
    int X,Y,RES;
    printf("Ingrese la base X: ");
    X=pedirDatos();
    printf("Ingrese el exponente Y: ");
    Y=pedirDatos();
    RES=potencia(X,Y);
    printf("%d elevado a %d es: %d\n",X,Y,RES);
    return 0;
}
int pedirDatos(){
    int e;
    scanf("%d", &e);
    return e;
}
int potencia(int X, int Y) {
    int resultado=1,i;
    if (Y == 0) return 1;
    for (i = 1; i <= Y; ++i) resultado *= X;
    return resultado;
}
