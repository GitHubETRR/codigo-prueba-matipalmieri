/*55.	Desarrollar un algoritmo que pida al usuario dos números y una letra: “I”, “i” ó “p”, “P”, 
luego mostrar en pantalla los pares (si se pulsó la “p”, “p”) ó impares (si se pulsó la “i”, “I”), 
comprendidos entre el primer número y el segundo. Tener en cuenta que el primer número debe ser menor 
al segundo y validar que ingrese las letras correspondientes.*/
#include <stdio.h>
#include <math.h>
int main() {
    int num1, num2;
    char letra;
    printf("Ingrese el primer número (menor): ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número (mayor): ");
    scanf("%d", &num2);
    if (num1 >= num2) {
        printf("El primer número debe ser menor que el segundo.\n");
        return 1;
    }
    printf("Ingrese 'p' para pares o 'i' para impares: ");
    scanf(" %c", &letra);
    if (letra == 'p' || letra == 'P') {
        printf("Números pares entre %d y %d:\n", num1, num2);
        for (int i = num1; i <= num2; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    } else if (letra == 'i' || letra == 'I') {
        printf("Números impares entre %d y %d:\n", num1, num2);
        for (int i = num1; i <= num2; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    } else {
        printf("Letra inválida. Por favor, ingrese 'p' o 'i'.\n");
        return 1;
    }
    printf("\n");
    return 0;
}