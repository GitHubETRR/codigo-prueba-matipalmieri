/*52.	Desarrollar un algoritmo que ingresa un número entero mayor o igual cero (validar) y luego 
muestre por pantalla la factorial del mismo.*/
#include <stdio.h>
#include <math.h>
int main(){
    int numero,factorial = 1;
    printf("Ingrese un entero mayor o igual a cero: ");
    scanf("%d", &numero);
    if (numero >= 0) {
        for (int i = 1; i <= numero; ++i) {
            factorial *= i;
        }
        printf("El factorial de %d es: %d\n", numero, factorial);
    } else printf("El número ingresado no es mayor o igual a cero.\n");
    return 0;
}