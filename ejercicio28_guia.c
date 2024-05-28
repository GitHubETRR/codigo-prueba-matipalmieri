#include <stdio.h>
#include <math.h>

int main(){
    
    float coef,coefPrincipal,ordenada,raiz1,raiz2;
    printf("Ingrese el valor de A: ");
    scanf("%f",&coefPrincipal);
    printf("Ingrese el valor de B: ");
    scanf("%f",&coef);
    printf("Ingrese el valor de C: ");
    scanf("%f",&ordenada);
    raiz1=(-coef+sqrt(coef*coef-4*coefPrincipal*ordenada))/2*coefPrincipal;//si como resultado da -nan significa que las raices son imaginarias
    raiz2=(-coef-sqrt(coef*coef-4*coefPrincipal*ordenada))/2*coefPrincipal;
    printf("El valor de la primera raíz es de %f\n",raiz1);
    printf("El valor de la segunda raíz es de %f",raiz2);
    return 0;
}