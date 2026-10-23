#include<stdio.h>
int main (void){
    int a;
    printf("\tMENU DE OPCIONES\n");
    printf("[1].-pizza sencilla\n");
    printf("[2].-pizza mediana\n");
    printf("[3].-pizza grende\n");
    printf("[4].-pizza familiar\n");
    printf("eliga su opcion\n");
    scanf("%i", &a);
    switch(a){
        case 1:
            printf("costo de la pizza es $80\n");
            break;
        case 2:
            printf("costo de la pizza es $120\n");
            break;
        case 3:
            printf("costo de la pizza es $160\n");
            break;
        case 4:
            printf("costo de la pizza es $180\n");
            break;
        default:
            printf("la orden no existe");
    }
    return 0;
}