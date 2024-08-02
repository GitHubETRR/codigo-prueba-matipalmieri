/*59.	Desarrolle la función “tablaDeMultiplicar” que reciba un entero por parámetro y muestre por 
pantalla su tabla de multiplicar de 0 a 10.*/
#include <stdio.h>

int ingresarDatos(void);
int tablaDeMultiplicar(int);

int main(){
    int dato;
    dato=ingresarDatos();
    tablaDeMultiplicar(dato);
    return 0;
}
int ingresarDatos(){
    int dato;
    printf("Ingrese un número entero:\n");
    scanf("%d",&dato);
    return dato;
}
int tablaDeMultiplicar(int dato){
    int i,res;
    printf("La tabla del 10 de dicho número es:\n");
    for(i=0;i<=10;i++){
        res=i*dato;
        printf("%d\n",res);
    }
}