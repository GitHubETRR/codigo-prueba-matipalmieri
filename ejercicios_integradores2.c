/*Desarrollar un programa en C que permita ingresar información de empleados, procesarla y mostrar 
resultados relevantes a través de un menú interactivo*/

#include <stdio.h>
#include <string.h>
#define EMPLEADOS_MAX 5
#define LETRAS_MAX 50

void ingresarDatos(void);
void procesarDatos(void);
void mostrarDatos(void);

struct Empleado{
    char nombre[LETRAS_MAX];
    int edad;
    float salario;
};

struct Empleado empleados[EMPLEADOS_MAX];
int numEmpleados = 0;

int main(){
    int eleccion;
    do{
        printf("\n - - - - \033[1;42mMenu\033[0m - - - - \n");
        printf("1. Ingresar datos de un empleado.\n");
        printf("2. Procesar y mostrar informacion relevante.\n");
        printf("3. Salir.\n");
        printf("Ingrese su eleccion: ");
        scanf("%d", &eleccion);
        switch(eleccion){
            case 1:
                ingresarDatos();
                break;
            case 2:
                mostrarDatos();
                procesarDatos();
                break;
            case 3:
                printf("\nChauuu\n");
                break;
            default:
                printf("\nEleccion invalida, proba de nuevo.\n");
        }
    } while (eleccion != 3);
    return 0;
}
void ingresarDatos(){
    if (numEmpleados < EMPLEADOS_MAX){
        printf("\n ------ \033[1;46mDatos del empleado %d\033[0m ------ \n", numEmpleados + 1);
        printf("Ingrese el nombre y apellido del empleado: ");
        getchar();
        scanf(" %49[^\n]", empleados[numEmpleados].nombre); //esta es la unica forma que encontre para que lea hasta el salto de línea
        printf("Ingrese la edad del empleado: ");
        scanf("%d", &empleados[numEmpleados].edad);
        printf("Ingrese el salario del empleado (en dólares): ");
        scanf("%f", &empleados[numEmpleados].salario);
        numEmpleados++;
        printf("Datos ingresados correctamente\n");
    } 
    else printf("\nNo se pueden ingresar más empleados.\n");
}
void procesarDatos(){
    if (numEmpleados == 0){
        printf("\nNo ingresaste empleados.\n");
        return;
    }
    float sumaSalarios = 0;
    float salarioMaximo = empleados[0].salario;
    char nombreSalarioMaximo[LETRAS_MAX];
    strcpy(nombreSalarioMaximo, empleados[0].nombre);
    for (int i=0 ; i < numEmpleados; i++){
        sumaSalarios += empleados[i].salario;
        if (empleados[i].salario > salarioMaximo){
            salarioMaximo = empleados[i].salario;
            strcpy(nombreSalarioMaximo, empleados[i].nombre);
        }
    }
    float promedioSalarios = sumaSalarios / numEmpleados;
    printf("Promedio de salarios: $%.2f\n", promedioSalarios);
    printf("Empleado con el salario más alto: %s\n", nombreSalarioMaximo);
}
void mostrarDatos(){
    printf("\n - - - \033[1;44mInformacion de Empleados\033[0m - - - \n");
    for (int i=0 ; i < numEmpleados; i++){
        printf("\033[1;31m%d.\033[0m \033[4mNombre\033[0m: %s\n\033[4mEdad\033[0m: %d, \033[4mSalario\033[0m: $%.2f\n\n", 
               i + 1, empleados[i].nombre, empleados[i].edad, empleados[i].salario);
    }
}