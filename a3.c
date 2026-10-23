#include<stdio.h>
//hacer un progama en C que calcule la suma, la resta, la multiplicacion y la division
int main (void){
    float numerouno,numerodos,a;
    printf("ingresa numero uno: \n");
    scanf("%f", &numerouno);
    printf("ingresa numero dos: \n");
    scanf("%f", &numerodos);
    a=numerouno+numerodos;
    printf("el resultado de la suma es: %f\n", a);
    a=numerouno-numerodos;
    printf("el resultado de la resta es: %f\n", a);
    a=numerouno*numerodos;
    printf("el resultado de la multiplicacion es: %f\n", a);
    a=numerouno/numerodos;
    printf("el resultado de la division es: %f\n", a);
    return 0;
}