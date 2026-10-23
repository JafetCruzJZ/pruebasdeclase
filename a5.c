#include<stdio.h>
//hacer un programa que evalue si un usuario pueda acceder a la sala de cine
//con base en su edad. R=13
int main(void){
    int a,R=13;
    printf("ingresa su edad: \n");
    scanf("%i", &a);
    if(a>R){
        printf("puedes ingresar\n");
    }
    else{
        printf("no puedes ingresar");
    }
return 0;
}