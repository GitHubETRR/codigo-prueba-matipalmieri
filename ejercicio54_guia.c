/*54.	Desarrollar un algoritmo que ingrese dos números enteros, (primero < segundo), validar y muestre por
 pantalla los números enteros del primer número al segundo.*/
#include <stdio.h>
#include <math.h>
int main(){
    int i,prim,seg;
    printf("Ingrese el primer numero: ");
    scanf("%d",&prim);
    printf("Ingrese el segundo numero, debe ser mayor que el anterior: ");
    scanf("%d",&seg);
    if(prim<seg){
        printf("Los numeros enteros desde %d hasta %d son:\n", prim, seg);
        for (int i = prim+1; i < seg; i++) printf("%d ", i);
    }
    else printf("ERROR, el primer numero debe ser menor al segundo.\n");
    return 0;
}