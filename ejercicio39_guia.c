/*39.	Desarrollar un algoritmo que ingrese nota entera (entre 1 y 10) de un alumno correspondiente 
al promedio obtenido, se pide mostrar el siguiente mensaje: "El alumno obtuvo un sobresaliente", según 
el promedio: 10-Sobresaliente, 8 y 9-Distinguido, 6 y 7-Bueno, 4 y 5-Aprobado, 1,2,3-Reprobado.*/
#include <stdio.h>
#include <math.h>
int main(){
    int nota;
    printf("Ingrese su nota entera: ");
    scanf("%d",&nota);
    if(nota<=3 && nota>0) printf("Usted ha reprobado..");
    else if(nota==4 || nota==5)printf("Usted ha aprobado..");
    else if(nota==6 || nota==7)printf("Usted es muy bueno :)");
    else if(nota==8 || nota==9)printf("Usted es un ser muy distinguido");
    else if(nota==10)printf("Usted es sobresaliente");
    else printf("No ingresaste una nota que esté entre el 1 y el 10");
    return 0;
}