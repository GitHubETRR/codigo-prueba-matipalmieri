/*62.	Desarrolle la función “esPrimo” que devuelva verdadero si el 
numero pasado por parámetro es un numero primo.*/

#include <stdio.h>
#include <math.h>

int esPrimo(int num);

int main() {
    int num;
    printf("Ingresa un numero: ");
    scanf("%d", &num);
    if (esPrimo(num)){
        printf("El número %d es primo.\n",num);
    } 
    else{
        printf("El número %d no es primo.\n",num);
    }
    return 0;
}
int esPrimo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}