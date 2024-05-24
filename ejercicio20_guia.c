#include <stdio.h>

int main(){

    int segs,horas,minutos,segundos;
    printf("Ingrese una cantidad de segundos:\n ");
    scanf("%d",&segs);
    if(segs<86400){
        horas=segs/3600;
        minutos=(segs%3600)/60;
        segundos=(segs%3600)%60;
        printf("Esa cantidad de segundos equivalen a %d horas, %d minutos y %d segundos",horas,minutos,segundos);
    }
    else if(segs>86400){

        printf("Lo siento pero debe ser menor a 86400 segundos");
    }
    return 0;
}