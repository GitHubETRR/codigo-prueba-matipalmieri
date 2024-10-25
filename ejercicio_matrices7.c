/*7. Escribir una función que rote una matriz cuadrada N x N 180 grados.
int matriz[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rota180 (int matriz[3][3], int);
int main(){
    int N=3;
    int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    printf("Matriz rotada 180 grados:\n");
    rota180(matriz, N);
    return 0;
}
void rota180(int matriz[][3], int N) {

    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}