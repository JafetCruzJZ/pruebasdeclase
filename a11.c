//un sistema electrico de medicion de temperatura proporcion incrementos de 100mlvolts por cada grado centigrado para indicar la temperatura
//el rengo de medicion va desde -3v hasta 10v tome en cuenta que 
//las medidas de -3 v hasta 1v son consideradas frias las medidas de 1v a 4v son consideradas templadas
// y de 4v a 10v son consideradas calientes
//haga un programa en c que dado la entrada en volts indique cual es la temperatura sensada y a cual de las tres clases pertenece 
#include<stdio.h>
int main (void){
    float a,b,v=1;
    printf("ingresa los volts\n");
    scanf("%f", &a);
    b=a*10;
    if (a>-3 && a<1){
        printf("la temperatura es considerada fria\n");
    }
    else if(a>=1 && a<4){
        printf("la temperatura es considerada templada\n");
    }
    else if(a>=4 && a<=10){
        printf("la temperatura es considerada caliente\n");
    }
    else{
        printf("los volts dados no estan dentro del rango admitido\n");
        v=0;
    }
    if (v){
        printf("la temperatura es de:%.2f°\n", b);
        }
    return 0; 

}