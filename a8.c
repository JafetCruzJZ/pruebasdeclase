#include <stdio.h>

int main(void) {
    int a;
    printf("bienvenidos a la langosta ahumada\n");
    printf("cuantas personas van a ingresar\n");
    scanf("%i", &a);
    if (a < 200) {
        printf("el costo por platillo es de 95\n");
    } 
    else if (a >= 200 && a <= 300) {
        printf("el costo por platillo sera de 85\n");
    } 
    else {
        printf("el costo por platillo sera de 75\n");
    }
    return 0;
}