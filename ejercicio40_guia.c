/*40.	Desarrollar un algoritmo que ingrese fecha de nacimiento como tres enteros (DD, MM, AAAA),
 de una persona y mostrar por pantalla su fecha de nacimiento, de la siguiente forma "La persona nació el
 5 de marzo de 1973".*/
#include <stdio.h>
#include <math.h>
int main(){
    int dias,meses,years;
    printf("Ingrese la fecha de nacimiento en el formato DD,MM y AAAA:");
    scanf("%d %d %d",&dias,&meses,&years);
    if(meses==1)printf("La persona nació el %d de enero de %d",dias,years);
    if(meses==2)printf("La persona nació el %d de febrero de %d",dias,years);
    if(meses==3)printf("La persona nació el %d de marzo de %d",dias,years);
    if(meses==4)printf("La persona nació el %d de abril de %d",dias,years);
    if(meses==5)printf("La persona nació el %d de mayo de %d",dias,years);
    if(meses==6)printf("La persona nació el %d de junio de %d",dias,years);
    if(meses==7)printf("La persona nació el %d de julio de %d",dias,years);
    if(meses==8)printf("La persona nació el %d de agosto de %d",dias,years);
    if(meses==9)printf("La persona nació el %d de septiembre de %d",dias,years);
    if(meses==10)printf("La persona nació el %d de octubre de %d",dias,years);
    if(meses==11)printf("La persona nació el %d de noviembre de %d",dias,years);
    if(meses==12)printf("La persona nació el %d de diciembre de %d",dias,years);
    return 0;
}