/*63.	Desarrolle la función “múltiplo” que recibe dos valores enteros y emite “verdadero” 
si el primero es múltiplo del segundo. Desarrolle la función “areaRectangulo” que reciba 3 parámetros 
(base, altura y área) devolviendo el área en los parámetros.*/

#include <stdio.h>
#include <math.h>

void multiplo(void);
void areaRectangulo(void);


int main(){
    int op;
    printf("Presione 1 si quiere probar si un numero es multiplo de otro\n");
    printf("Presione 2 si quiere averiguar el area de un rectangulo\n");
    scanf("%d", &op);
    
    switch(opcion) {
        case 1:
        multiplo();
        break;
        
        case 2:
        areaRectangulo();
        break;
        
        default:
        break;
    }
}

void multiplo(){
    int num1, num2;
    printf("Usted eligio probar el multiplo de un numero\n");
    printf("Ingrese el numero mas grande\n");
    scanf("%d", &num1);
    printf("Ingrese el numero mas pequeño\n");
    scanf("%d", &num2);
    if (num1 % num2 == 0){
        printf("El numero es multiplo");
    }else{
        printf("El numero no es multiplo");
    }
}

void areaRectangulo(){
    int base, altura, area;
    printf("Ingrese la base del rectangulo\n");
    scanf("%d", &base);
    printf("Ingrese la altura del rectangulo\n");
    scanf("%d", &altura);
    area = base * altura;
    printf("El rectangulo tiene una base de %d", area);
}