#include <stdio.h>

int main(){

    int vetor[10];
    int i, num;

    /*Recebendo os numeros digitados pelo usuario e salvando o cubo deles no vetor*/
    for (i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        vetor[i] = num * num * num;
    }
    
    printf("\nImprimindo os valores ao cubo salvos no vetor\n\n");

    /*Imprimindo os valores ao cubo salvos no vetor*/
    for (i = 0; i < 10; i++){
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
}