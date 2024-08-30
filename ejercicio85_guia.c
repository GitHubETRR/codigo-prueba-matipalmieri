/*85.	Escribe un programa que almacene, en un vector con dimensión 10, los números 10 primeros números 
de la Quiniela. El ingreso de los datos será indicando posición-numero, de modo que puedo ingresar la 
posición 5 antes que la posición 2.*/

#include <stdio.h>

int main(){
    int vect[10]={0};
    int c,val;
    for(int i=0;i<11;i++){
        printf("¿A qué casilla de las 10 le quiere introducir el valor?(te lo voy a preguntar hasta que hayas llenado todos los números)\n");
        scanf("%d",&c);
        printf("¿Cuál es el valor?\n");
        scanf("%d",&val);
        vect[c]=val;
    }
    for(int i=0;i<11;i++) printf("El numero %d vale %d\n",i,vect[i]);
    return 0;
}
