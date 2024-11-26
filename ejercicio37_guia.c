/*37.	Desarrollar un algoritmo que ingrese tres caracteres y mostrarlos ordenados según el orden 
ascendente del alfabeto. */
#include <stdio.h>
#include <math.h>
int main(){
    char chara1,chara2,chara3;
    do{
        printf("Ingrese las 3 letras en minúscula, separadas por espacios:");
        scanf("%c %c %c ",&chara1,&chara2,&chara3);
        if(!(chara1<123 && chara1>96 && chara2<123 && chara2>96 && chara3<123 && chara3>96)){
            printf("No ingresaste una letra en minúscula... vuelve a intentar:");
        }
    }while(!(chara1<123 && chara1>96 && chara2<123 && chara2>96 && chara3<123 && chara3>96));
    if(chara1<chara2 && chara2<chara3)printf("Tus letras son %c,%c y %c",chara1,chara2,chara3);
    else if(chara1<chara3 && chara3<chara2)printf("Tus letras son %c,%c y %c",chara1,chara3,chara2);
    else if(chara3<chara2 && chara2<chara1)printf("Tus letras son %c,%c y %c",chara3,chara2,chara1);
    else if(chara3<chara1 && chara1<chara2)printf("Tus letras son %c,%c y %c",chara3,chara1,chara2);
    else if(chara2<chara3 && chara3<chara1)printf("Tus letras son %c,%c y %c",chara2,chara3,chara1);
    else if(chara2<chara1 && chara1<chara3)printf("Tus letras son %c,%c y %c",chara2,chara1,chara3);
    }
    return 0;
}