/*127.	Dada la estructura struct producto {int id; float precio}; desarrollar una función que reciba 
dicha estructura como puntero y aplique un descuento del 20% al precio.
128.	Dada la estructura del ejercicio 2, desarrolle una función que reciba dos estructuras producto
y devuelva aquella que tiene el precio más caro.*/
#include <stdio.h>

struct producto {
    int id;
    float precio;
};
int main(){
    struct producto prod1, prod2;
    printf("Ingrese los datos del primer producto:\n");
    ingresarProducto(&prod1);
    printf("\nIngrese los datos del segundo producto:\n");
    ingresarProducto(&prod2);
    printf("\nAplicando descuento a ambos productos...\n");
    aplicarDescuento(&prod1);
    aplicarDescuento(&prod2);
    printf("Producto 1 (con descuento): ID = %d, Precio = %.2f\n", prod1.id, prod1.precio);
    printf("Producto 2 (con descuento): ID = %d, Precio = %.2f\n", prod2.id, prod2.precio);
    struct producto masCaro = obtenerMasCaro(prod1, prod2);
    printf("\nEl producto más caro (después del descuento) es con ID %d y precio %.2f\n", masCaro.id, masCaro.precio);
    return 0;
}
void ingresarProducto(struct producto *p) {
    printf("Ingrese el ID del producto: ");
    scanf("%d", &p->id);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &p->precio);
}
void aplicarDescuento(struct producto *p) {
    p->precio *= 0.8; 
}
struct producto obtenerMasCaro(struct producto p1, struct producto p2) {
    return (p1.precio > p2.precio) ? p1 : p2;
}

