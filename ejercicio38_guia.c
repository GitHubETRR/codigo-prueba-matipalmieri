/*38.	Desarrollar un algoritmo que ingrese dos números y luego un carácter que indique una operación 
(S-Suma, R-Resta, M-Multiplicación, D-División) y luego realice la operación correspondiente, tener en 
cuenta que no se pueden realizar divisiones por cero. */ tutuca estuvo aqui
#include <stdio.h>
#include <math.h>
int main(){
    float num1,num2,res;
    int elec;
    char oper;
    printf("Ingrese dos números: ");
    scanf("%f %f",&num1,&num2);
    fflush(stdin);
    printf("Ahora indique una operación que quiera realizar (S-Suma, R-Resta, M-Multiplicación, D-División)");
    scanf("%c",&oper);
    fflush(|stdin);
    if(oper==83) res=num1+num2;
    else if(oper==82){
        printf("Ingrese 1 si quiere restar el segundo numero al primero, sino, ingrese otro numero: ");
        scanf("%d",&elec);
        if(elec==1) res=num1-num2;
        else res=num2-num1;
    }
    else if(oper==77) res=num1*num2;
    else if(oper==68){
        printf("Ingrese 1 si quiere dividir el primer numero sobre el segundo, sino, ingrese otro numero: ");
        scanf("%d",&elec);
        if(elec==1) {
            if (num2==0) printf("Estas haciendo una división sobre 0, lo cual no es posible");
            else res=num1/num2;
        }
        else{
            if (num1==0) printf("Estas haciendo una división sobre 0, lo cual no es posible");
            else res=num2/num1;
        }
    }
    else printf("No ingresaste un carácter válido...");
    printf("El resultado es %f",res);
    return 0;
}