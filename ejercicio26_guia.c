#include <stdio.h>

int main(){

    long int numero,cifra;
    printf("Ingrese un numero ENTERO de 2 o más cifras: ");
    scanf("%f",&numero);
    if(numero<100){
        printf("Lo siento, el numero debe ser positivo y debe tener más de dos cifras:(");
    }
    else if(numero>=100){
        cifra=numero%10;
        printf("La última cifra de tu número es %f.",cifra);
    }
    return 0;
} //NO ESTA TERMINAADOOO