#include <stdio.h>

int main(){

    float vetor[10];
    float num;
    int i;

    /*Armazenando a metade dos numeros digitados pelo usuario*/
    for (i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &num);
        vetor[i] = num / 2;
    }

    printf("\nMetade dos valores digitados\n\n");

    /*Imprimindo a metade dos valores digitados*/
    for (i = 0; i < 10; i++){
        printf("Valor %d: %.1f\n", i + 1, vetor[i]);
    }
    
    return 0;
}