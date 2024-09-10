#include <stdio.h>

int main (){
    int meses,years,dias;
    printf("¿Cuantos años tenes? ");
    scanf("%d",&years);
    printf("\n¿Y hace cuantos meses tenes esa edad? ");
    scanf("%d",&meses);
    dias=years*365+meses*30;
    printf("¡Ya viviste por %d días!",dias);
    return 0;
}