/*41.	Desarrolle un algoritmo que ingrese los valores de los lados de un triángulo. Valide si las 
medidas pueden formar un triángulo y luego indique a través de un mensaje que tipo de triángulo 
es (EQUILÁTERO, ISÓSCELES, O ESCALENO).*/
#include <stdio.h>
#include <math.h>

int main(){
   int lado_1, lado_2, lado_3;

   printf("Ingrese los valores de los tres lados del triangulo: ");
   scanf("%d%d%d",&lado_1,&lado_2,&lado_3);

   if (((lado_1+lado_2)>lado_3)&&((lado_1+lado_3)>lado_2)&&((lado_2+lado_3)>lado_1)){
      if ((lado_1==lado_2)&&(lado_2==lado_3)) printf("El triangulo es equilatero");
      else if ((lado_1==lado_2)||(lado_1==lado_3)||(lado_2==lado_3)) printf("El triangulo es isosceles");
      else printf("El triangulo es escaleno");
   }
   else printf("No se puede formar un triangulo con esas medidas");
   return 0;
}
