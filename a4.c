#include <stdio.h>
//un persona ahorra el 15% de salario semanal, el 20% en pago de productos y servicios,
// y el 50% en comida, el ultimo 15% en diversion.
int main(void) {
    int a,b,c,d,x;
    printf("ingresa el salario semanal: \n");
    scanf("%f", &x);
    a=x*4;
    b=a*.15
    c=a*.50
    d=a*.2
    printf("ahorro mensual: %i", b);
    printf("dinero para comida mensual: %i", c);
    printf("pago de productos mensual: %i", d);
    printf("dinero para diversion: %i", b);
    return 0;
}