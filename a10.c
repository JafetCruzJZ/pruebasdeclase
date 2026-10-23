//la asociasion de vinivultores fija el precio de de uva,la cual se clasifica en tipos a y b, y ademas en tamaños 1 y 2.
//cuando se realiza la venta del producto esta es de un solo tipo y tamaño, se requiere determinar, cuanto recibira un productor por la uva que
//entrega en un embarque considerando lo siguiente, si es de tipo a, se le cargan dos centabos al precio inicial, cuando es de tamaño1.
//y 30 sentabos si es de tamaño 2.
//si es de tipo b{se rebaja 30 centabos cuando es de tamaño 1 y 50 centabos cuando es de tamaño dos.}
//realice un programa en c para determinar la ganacia obtenida de la venta.
#include<stdio.h>
int main(void){
    float p,k,g;
    int c,t;
    printf("Cual es el precio inicial solicitado: \n");
    scanf("%f", &p);
    printf("cual es el peso en KG de uva: \n");
    scanf("%f", &k);
    printf("seleccione el tipo de uva [1]Roja, [2]Verde \n");
    scanf("%d", &c);
    printf("cual es el tamaño de la uva[1],[2]\n");
    scanf("%d", &t);
    switch(c){
        case 1:
            if(t==1){
                p=p+0.20;

                printf("en caso de que el tamaño de la uva sea 1 y de tipo a se le agregara una comision de 20 centavos\n");
            }
            else if(t==2){
                p=p+0.30;
                printf("en caso de que el tamaño de la uva sea 2 y de tipo a se le agregara una comision de 30 centavos\n");
            }
            break;
        case 2:
            if(t==1){
                p=p-0.30;
                printf("en caso de que el tamaño de la uva sea 1 y de tipo b se le disminuira una comision de 30 centavos\n");
            }
            else if(t==2){
                p=p-0.50;
                printf("en caso de que el tamaño de la uva sea 2 y de tipo b se le disminuira una comision de 50 centavos\n");
            }
            break;
        default:
            printf("la opcion seleccionada no es valida\n");
            return 0;
    }
    g=p*k;
    printf("el precio total es: %.2f\n", g);
return 0;
}