//61.	Desarrolle la función “menu” que muestre por pantalla 4 opciones, pida ingresar una de esas opciones y 
//devuelva por resultado la opción elegida. La función debe validar que la opción 
//ingresada sea valida si hay 4 opciones, no debo poder elegir la opción 6). 

#include <stdio.h>

int menu(void);

int main() {
    int opcion;
    opcion = menu();
    printf("Usted eligió la opción: %d\n", op);
}

int menu(void) {
    int op;
    do {
        printf("Ingrese una opción (1-4): ");
        scanf("%d", &op);
        if (op < 1 || op > 4) {
            printf("Opción no válida. Ingrese una opcion entre 1 y 4.\n");
        }
    } while (op < 1 || op > 4);
    
    return op;
}