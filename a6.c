#include<stdio.h>
#include<stdbool.h>
//Escriba un programa en C que lea un numero cualquiera que imprima el mismo numero como salida
//cuando tome valores mayores a 10.
int main(void){
    int a;
    printf("ingresa un numero cualquiera mayor a 10: \n");
    scanf("%i", &a);
    if (a>=10){
        printf("el numero si mayor a 10: %i", a);
    }
    else{
        printf("el numero no es mayor a 10\n");
    }
    return 0;
}