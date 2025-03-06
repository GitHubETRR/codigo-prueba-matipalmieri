/*42.	Construir un programa que ingrese un carácter y determine si es una vocal.*/
#include <stdio.h>
#include <math.h>
int main(){
    char letra;
    printf("Ingrese una letra en mayúscula: ");
    scanf("%c",&letra);
    if ((letra==65) || (letra==69) || (letra==73)||(letra==79)||(letra==85)) printf("La letra que ingresaste es una vocal");
    else if ((letra<65) || (letra>90)) printf("No ingresaste una letra mayúscula...");
    else printf("No ingresaste una vocal");
    return 0;
}
