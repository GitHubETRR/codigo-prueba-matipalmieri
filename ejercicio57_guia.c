/*57.	Desarrolle la función “mayorDeDos” que reciba dos enteros por parámetro y muestre por pantalla al
 mayor de ellos. Luego modifíquela a “getMayorDeDos” para que devuelva el mayor como resultado. */
#include <stdio.h>

void mayorDeDos(int,int);
int pedirDatos(void);

int main(){
    int num1,num2;
    printf("Ingrese un número:\n");
    num1=pedirDatos();
    printf("Ingrese otro número:\n");
    num2=pedirDatos();
    mayorDeDos(num1,num2);
    return 0;
}
int pedirDatos(void){
    int valor;
    scanf("%d",&valor);
    return valor;
}
void mayorDeDos(int num1, int num2){
    if (num1 > num2) {
        printf("El número mayor es: %d\n", num1);
    } else {
        printf("El número mayor es: %d\n", num2);
    }
}