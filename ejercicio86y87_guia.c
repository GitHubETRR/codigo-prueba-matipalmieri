/*86.	Escribe un programa con un menú que defina las siguientes funciones y emita los resultados, la dimensión del vector será de 10 (elementos):
•	Cargar m elementos de un vector por teclado. Deberá considerar que no podrá superar el máximo de elementos de vector: void cargar(int vect[], int unNum);
•	Leer elementos de un vector hasta encontrar el número entero a. Deberá retornar el número de elementos que ha leído sin contar el entero a. int leerMarca(int vect[]);
•	Dado un elemento y dado un vector de enteros, desarrolle una función que devuelva el número de apariciones del elemento en el vector. int veces(int valor, int vect[], int unNum);
Invertir los elementos del vector sin utilizar otro vector. Por ejemplo, el vector formado por los enteros: 1 2 3, debe quedar 3 2 1. void invertirOrden(int vect[], int unNum);

87.	Continúa agregando funciones al ejercicio anterior que permitan:
•	Calcular y emitir la suma de sus elementos.
•	Calcular y emitir el mínimo del vector.
•	Calcular y emitir el promedio de los valores del vector
•	Emitir los valores de aquellos que superaron ese promedio.
•	Emitir los valores del vector que son múltiplos del último número ingresado en el mismo.
•	Emitir el valor máximo e indicar la cantidad de veces que apareció y el número de orden en que fue ingresado.
•	Emitir los valores que son pares.
•	Emitir los valores que son impares.
•	Emitir aquellos que estén ubicados en posición par.*/

#include <stdio.h>
#define MAX 10

void cargar(int vect[], int unNum);
int leerMarca(int vect[]);
int veces(int valor, int vect[], int unNum);
void invertirOrden(int vect[], int unNum);
void sumaElementos(int vect[], int unNum);
int calcularMinimo(int vect[], int unNum);
float calcularPromedio(int vect[], int unNum);
void valoresMayoresAlPromedio(int vect[], int unNum, float promedio);
void valoresMultiplosDelUltimo(int vect[], int unNum);
void valorMaximo(int vect[], int unNum);
void valoresPares(int vect[], int unNum);
void valoresImpares(int vect[], int unNum);
void valoresPosicionesPares(int vect[], int unNum);

int main(){
    int vector[MAX];
    int opcion,valor,elementos=0,contador;
    float promedio;
    do {
        printf("\nMenú de opciones:\n");
        printf("1. Cargar vector\n");
        printf("2. Leer hasta encontrar un número (marca)\n");
        printf("3. Contar apariciones de un número\n");
        printf("4. Invertir el orden del vector\n");
        printf("5. Suma de elementos\n");
        printf("6. Calcular mínimo\n");
        printf("7. Calcular promedio\n");
        printf("8. Valores mayores al promedio\n");
        printf("9. Valores múltiplos del último valor\n");
        printf("10. Valor máximo y cantidad de apariciones\n");
        printf("11. Valores pares\n");
        printf("12. Valores impares\n");
        printf("13. Valores en posiciones pares\n");
        printf("0. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion); //si se ingresa algo que no sea un número hace cualquiera
        switch(opcion) {
            case 1:
                printf("¿Cuántos elementos quieres cargar (máximo %d)? ", MAX);
                scanf("%d", &elementos);
                cargar(vector, elementos);
                break;
            case 2:
                contador = leerMarca(vector);
                printf("Se han leído %d elementos hasta encontrar la marca.\n", contador);
                break;
            case 3:
                printf("Introduce el número a buscar: ");
                scanf("%d", &valor);
                contador = veces(valor, vector, elementos);
                printf("El número %d aparece %d veces en el vector.\n", valor, contador);
                break;
            case 4:
                invertirOrden(vector, elementos);
                printf("El vector ha sido invertido.\n");
                break;
            case 5:
                sumaElementos(vector, elementos);
                break;
            case 6:
                printf("El valor mínimo es %d.\n", calcularMinimo(vector, elementos));
                break;
            case 7:
                promedio = calcularPromedio(vector, elementos);
                printf("El promedio de los valores es %.2f.\n", promedio);
                break;
            case 8:
                valoresMayoresAlPromedio(vector, elementos, promedio);
                break;
            case 9:
                valoresMultiplosDelUltimo(vector, elementos);
                break;
            case 10:
                valorMaximo(vector, elementos);
                break;
            case 11:
                valoresPares(vector, elementos);
                break;
            case 12:
                valoresImpares(vector, elementos);
                break;
            case 13:
                valoresPosicionesPares(vector, elementos);
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 0);
    return 0;
}
void cargar(int vect[], int unNum){
    for (int i = 0; i < unNum; i++) {
        printf("Introduce el valor %d: ", i + 1);
        scanf("%d", &vect[i]);
    }
}
int leerMarca(int vect[]){
    int i = 0, valor;
    printf("Introduce el número de marca: ");
    scanf("%d", &valor);
    while (vect[i] != valor && i < MAX){
        i++;
    }
    return i;
}
int veces(int valor, int vect[], int unNum){
    int contador=0;
    for (int i=0;i<unNum;i++){
        if (vect[i] == valor) {
            contador++;
        }
    }
    return contador;
}
void invertirOrden(int vect[], int unNum){
    for (int i=0;i<unNum/2;i++){
        int temp=vect[i];
        vect[i]=vect[unNum-i-1];
        vect[unNum-i-1]=temp;
    }
}
void sumaElementos(int vect[], int unNum){
    int suma=0;
    for (int i=0;i<unNum;i++) {
        suma+=vect[i];
    }
    printf("La suma de los elementos es: %d\n",suma);
}
int calcularMinimo(int vect[],int unNum){
    int minimo=vect[0];
    for (int i=1;i<unNum;i++){
        if (vect[i]<minimo){
            minimo=vect[i];
        }
    }
    return minimo;
}
float calcularPromedio(int vect[], int unNum){
    int suma=0;
    for (int i=0;i<unNum;i++){
        suma+=vect[i];
    }
    return (float)suma/unNum;
}
void valoresMayoresAlPromedio(int vect[], int unNum, float promedio){
    printf("Valores mayores al promedio (%.2f):\n",promedio);
    for (int i=0;i<unNum;i++){
        if (vect[i]>promedio){
            printf("%d ",vect[i]);
        }
    }
    printf("\n");
}
void valoresMultiplosDelUltimo(int vect[], int unNum){
    int ultimo=vect[unNum-1];
    printf("Valores múltiplos de %d:\n", ultimo);
    for(int i=0;i<unNum;i++){
        if(vect[i]%ultimo==0){
            printf("%d ",vect[i]);
        }
    }
    printf("\n");
}
void valorMaximo(int vect[], int unNum) {
    int maximo=vect[0],contador=1,posicion=0;
    for (int i=1;i<unNum;i++) {
        if (vect[i]>maximo) {
            maximo=vect[i];
            contador=1;
            posicion=i;
        } 
        else if(vect[i]==maximo){
            contador++;
        }
    }
    printf("El valor máximo es %d y aparece %d veces. La primera aparición es en la posición %d.\n", maximo, contador, posicion + 1);
}
void valoresPares(int vect[],int unNum){
    printf("Valores pares:\n");
    for (int i=0;i<unNum;i++) {
        if (vect[i]%2==0){
            printf("%d ",vect[i]);
        }
    }
    printf("\n");
}
void valoresImpares(int vect[],int unNum) {
    printf("Valores impares:\n");
    for (int i=0;i<unNum;i++) {
        if (vect[i]%2!=0) {
            printf("%d ",vect[i]);
        }
    }
    printf("\n");
}
void valoresPosicionesPares(int vect[], int unNum) {
    printf("Valores en posiciones pares:\n");
    for (int i=0;i<unNum;i+=2){
        printf("%d ",vect[i]);
    }
    printf("\n");
}
