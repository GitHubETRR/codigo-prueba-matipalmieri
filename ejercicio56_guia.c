/*56.	Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 10
disparos, registrando las coordenadas (x, y) de cada disparo. Indicar cuántos disparos se produjeron en 
cada cuadrante y cuantos dieron en el blanco.*/
#include <stdio.h>

int main(){
    int q1,q2,q3,q4,objetivo,i,j;
    int PARTICIPANTES=5,TIROS=10;
    float x,y;
    for (i = 0; i < PARTICIPANTES; i++){
        printf("Participante %d:\n", i + 1);
        for (j = 0; j < TIROS; j++) {
            printf("  Disparo %d - Ingrese coordenadas (x y): ", j + 1);
            scanf("%f %f", &x, &y);
            if (x > 0 && y > 0) q1++;
            else if (x < 0 && y > 0) q2++;
            else if (x < 0 && y < 0) q3++;
            else if (x > 0 && y < 0) q4++;
            if (x==0 && y==0) objetivo++;
        }
    }
    printf("\nResultados del concurso:\n");
    printf("Cuadrante 1: %d disparos\n", q1);
    printf("Cuadrante 2: %d disparos\n", q2);
    printf("Cuadrante 3: %d disparos\n", q3);
    printf("Cuadrante 4: %d disparos\n", q4);
    printf("Disparos en el blanco: %d\n",objetivo);

    return 0;
}