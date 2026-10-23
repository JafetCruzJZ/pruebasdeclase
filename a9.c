#include<stdio.h>
int main(void){
    int a,b,c,x,y;
    printf("cual es la cantidad de kilometros recorrido: \n");
    scanf("%i",&a);
    printf("WARNING: Si el numero de personas e menor a 20 se le cobrara como si fueran 20\n");
    printf("cuantas personas estan en el recorrido: \n");
    scanf("%i", &b);
    if(b<20){
        printf("AL SER MENOR DE 20 SE COBRARA COMO SI FUERAN 20\n");
        b=20;
        }
        printf("eliga el tipo de autobus\n");
        printf("[1], autobus a\n");
        printf("[2], autobus b\n");
        printf("[3], autobus c\n");
        scanf("%i", &c);
        switch(c){
            case 1:
                x=a*b;
                y=x*2;
                break;
            case 2:
                x=a*b;
                y=x*2.5;
                break;
            case 3:
                x=a*b;
                y=x*3;
                break;
            }
    printf("el precio total a pagar sera de :%i\n", y);
    return 0;
}