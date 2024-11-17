#include <stdio.h>

int main(){

    int i, num, soma;

    soma = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;
    }

    printf("\nResultado da soma dos numeros: %d\n\n", soma);

    return 0;

}