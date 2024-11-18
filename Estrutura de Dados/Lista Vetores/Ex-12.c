#include <stdio.h>

int main(){

    int vetor[10];
    int i, num;

    /*Armazenando o qudrado dos 10 numeros digitados*/
    for (i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        vetor[i] = num * num;
    }

    printf("\nImprimindo os valores ao quadrado salvos no vetor\n\n");

    /*imprimindo o quadrado dos 10 numeros digitados*/
    for (i = 0; i < 10; i++){
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
}