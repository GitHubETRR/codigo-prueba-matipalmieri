#include <stdio.h>
int main(){
    float cm,pulgadas,pies,var1=2.54,var2=30.48;
    printf("Ingrese su longitud en centimetros: ");
    scanf("%f",&cm);
    pulgadas=cm/var1;
    pies=cm/var2;
    printf("Su longitud en pies es equivalente a %f \n",pies);
    printf("Además, equivale a %f pulgadas",pulgadas);
    return 0;
}