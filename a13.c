#include<stdio.h>
int main(void){
    int a,b,n,x=1;
    printf("si desea que se una secuencia sea asendente el primer numero debe ser menor al segundo\n");
    printf("si desea que se en orden decendente el primer numero tine que ser mayor al segundo\n");
    printf("primer numero:\n");
    scanf("%d", &a);
    printf("segundo numero:\n");
    scanf("%d", &b);
    n=a;
    printf("si desa controlar la secuencia ingresar el numero que desa\n");
    printf("si no, solo ingresar [1]\n");
    scanf("%i", &x);
    if(a<b){
        while(a<=b){
        a+=x;
        printf("%i\n", n);
        n+=x;
        }
    }
    else{
    while(b<=a){
        b+=x;
        printf("%i\n", n);
        n-=x;
        }
    }
    return 0;
}
