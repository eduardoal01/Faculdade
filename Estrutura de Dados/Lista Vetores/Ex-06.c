#include <stdio.h>

int main(){

    int vetor[100];
    int i, j = 0;
    
    /*Intervalo de 1 a 500, para verificar os multiplos de 5*/
    for (i = 1; i <= 500; i++){
        if (i % 5 == 0) {
            vetor[j] = i;
            j++;
        }
    }

    /*Acessando e imprimindo o valor do indice*/
    printf("\nMultiplos de 5\n");
    for (i = 0; i < j; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}