/*Desarrollar un programa en lenguaje C que permita gestionar las ventas de una librería. El sistema debe 
almacenar información sobre los libros y las ventas realizadas, además de calcular estadísticas a partir 
de los datos cargados. No se permite el uso de archivos.*/

#include <stdio.h>
#include <string.h>

#define MAX_LIBROS 5
#define MAX_VENTAS 10
#define MAX_LETRAS1 50
#define MAX_LETRAS2 30

void cargarLibros(Libro libros[], int *numLibros);
void realizarVenta(Venta ventas[], int *numVentas, Libro libros[], int numLibros);
float calcularTotalVentas(Venta ventas[], int numVentas);
void ventasPorLibro(Venta ventas[], int numVentas);
int buscarLibro(Libro libros[], int numLibros, char titulo[]);

typedef struct{
    int dia;
    int mes;
    int year;
}fecha_t;

typedef struct{
    char titulo[MAX_LETRAS1];
    char autor[MAX_LETRAS2];
    float precio;
}libro_t;

typedef struct{
    Libro libro;
    int cantidad;
    Fecha fecha;
}venta_t;

int main() {
    Libro libros[MAX_LIBROS];
    Venta ventas[MAX_VENTAS];
    int numLibros = 0, numVentas = 0;
    int opcion;
    do{
        printf("\n--- Menu de Libreria ---\n");
        printf("1. Cargar libros\n");
        printf("2. Registrar una venta\n");
        printf("3. Calcular total de ventas\n");
        printf("4. Mostrar ventas por libro\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
                cargarLibros(libros, &numLibros);
                break;
            case 2:
                realizarVenta(ventas, &numVentas, libros, numLibros);
                break;
            case 3:
                printf("Total de ventas: $%.2f\n", calcularTotalVentas(ventas, numVentas));
                break;
            case 4:
                ventasPorLibro(ventas, numVentas);
                break;
            case 5:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    }while(opcion != 5);
    return 0;
}

void cargarLibros(Libro libros[], int *numLibros){
    if (*numLibros >= MAX_LIBROS){
        printf("No se pueden cargar mas libros.\n");
    }
