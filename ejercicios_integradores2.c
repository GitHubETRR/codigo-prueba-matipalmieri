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
    int opcion;
    do{
        printf("\n - - - - Menú - - - - \n");
        printf("1. Ingresar datos de un empleado.\n");
        printf("2. Procesar y mostrar información relevante.\n");
        printf("3. Salir.\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:
                ingresarDatos();
                break;
            case 2:
                mostrarDatos();
                procesarDatos();
                break;
            case 3:
                printf("\n¡Hasta luego!\n");
                break;
            default:
                printf("\nOpción inválida. Intente nuevamente.\n");
        }
    }while(opcion != 3);
    return 0;
}
void ingresarDatos(){
    if (numEmpleados < EMPLEADOS_MAX){
        printf("\n ------ Datos del empleado %d ------ \n", numEmpleados + 1);
        printf("Ingrese el nombre y apellido del empleado: ");
        getchar();  
        fgets(empleados[numEmpleados].nombre, LETRAS_MAX, stdin);
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
        printf("\nNo se han ingresado empleados.\n");
        return;
    }
    float sumaSalarios = 0;
    float salarioMaximo = empleados[0].salario;
    char nombreSalarioMaximo[LETRAS_MAX];
    strcpy(nombreSalarioMaximo, empleados[0].nombre);
    for (int i = 0; i < numEmpleados; i++){
        sumaSalarios += empleados[i].salario;
        if (empleados[i].salario > salarioMaximo){
            salarioMaximo = empleados[i].salario;
            strcpy(nombreSalarioMaximo, empleados[i].nombre);
        }
    }
    float promedioSalarios = sumaSalarios / numEmpleados;
    printf("Promedio de salarios: $%.2f\n", promedioSalarios);
    printf("Empleado con el salario más alto: %s", nombreSalarioMaximo);
}
void mostrarDatos(){
    printf("\n - - - Información de Empleados - - - \n");
    for (int i = 0; i < numEmpleados; i++) printf("%d. Nombre: %sEdad: %d, Salario: $%.2f\n\n", i + 1, empleados[i].nombre,empleados[i].edad,empleados[i].salario);
}