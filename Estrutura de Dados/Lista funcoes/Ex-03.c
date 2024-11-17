#include <stdio.h>

int calculoDelta(int a, int b, int c);

int main(){

    int a, b, c, delta;

    printf("Qual o valor de a ? ");
    scanf("%d", &a);

    printf("Qual o valor de b ? ");
    scanf("%d", &b);

    printf("Qual o valor de C ? ");
    scanf("%d", &c);

    delta = calculoDelta(a, b, c);

    printf("\nvalor de a: %d", a);
    printf("\nValor de b: %d", b);
    printf("\nValor de c: %d", c);
    printf("\nValor de Delta: %d\n\n", delta);
    
    return 0;
}

int calculoDelta(int a, int b, int c){

    return (b*b)-4*a*c;
}
