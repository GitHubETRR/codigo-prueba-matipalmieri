/*Ingresar una matriz, de NxN valores en forma aleatoria, entre 1 y 30, donde N es 5, 
informar el valor máximo y su ubicación.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CAS 5
#define MAX 30

void randomear(int matriz[CAS][CAS]);
void maxNumero(int valorMax, int filaMax, int columnaMax, int matriz[CAS][CAS]);

 int main(){
    int matriz[CAS][CAS];
    int valorMax=0,filaMax=0,columnaMax=0;
    randomear(matriz);
    maxNumero(valorMax, filaMax, columnaMax, matriz);
    return 0;
}

void randomear(int matriz[CAS][CAS]){
    srand(time(NULL));
    for (int i=0;i<CAS;i++){
        for (int j=0;j<CAS;j++){
            matriz[i][j] = rand() % MAX + 1; 
            printf("%2d ", matriz[i][j]);  
        }
        printf("\n");
    }    
}
void maxNumero(int valorMax, int filaMax, int columnaMax, int matriz[CAS][CAS]){
    for (int i=0;i<CAS;i++) {
        for (int j=0;j<CAS;j++) {
            if (matriz[i][j]>valorMax) {
                valorMax=matriz[i][j];
                filaMax=i;
                columnaMax=j;
            }
        }
    }
    printf("El valor mas alto es %d y se esta en la fila %d y en la columna %d", valorMax, filaMax + 1, columnaMax + 1);
}