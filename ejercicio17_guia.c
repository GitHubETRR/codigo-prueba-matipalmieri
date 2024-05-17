#include <stdio.h>
int main(){

    unsigned int hora1,hora2,min1,min2,seg1,seg2;
    unsigned int horaf,minf,segf;
    printf("Ingrese el primer tiempo a sumar, expresado en horas, minutos y segundos correspondientemente: ");
    scanf("%d\n%d\n%d",&hora1,&min1,&seg1);
    printf("Ahora, el segundo tiempo, también expresado en horas minutos y segundos: ");
    scanf("%d\n%d\n%d",&hora2,&min2,&seg2);
    horaf=hora1+hora2;
    minf=min1+min2;
    segf=seg1+seg2;
    if(segf>59){
        minf=minf+1;
        segf=segf-60;
    }
    if(minf>59){
        horaf=horaf+1;
        minf=minf-60;
    }
    printf("Su tiempo final es equivalente a: %d horas, %d minutos y %d segundos ",horaf,minf,segf);
    return 0;
}