#include <stdio.h>
#include <math.h>

int main(){
    
    int numero,digito1,digito2,digito3,digito4;
    printf("Ingrese un número entero de 4 dígitos: ");
    scanf("%d",&numero);
    digito1=numero/1000;
    digito2=(numero/100)%10;
    digito3=(numero/10)%10;
    digito4=numero%10;
    if(digito4==digito1 && digito2==digito3)printf("Tu número es capicúa.");
    else printf("Tu número no es capicúa");
    return 0;
}