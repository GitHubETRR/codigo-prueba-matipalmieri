#include <stdio.h>
int main(){
    float ang1,ang2,angf,ang12;
    printf("Por favor, ingrese el valor de sus ángulos: ");
    scanf("%f%f",&ang1,&ang2);
    ang12=ang1+ang2;
    if(ang12>180){
        printf("Algo anda mal, los ángulos suman más de 180");
    }
    else if (ang12<180){
        angf=180-ang12;
        printf("Su tercer ángulo mide %f",angf);
    }
}