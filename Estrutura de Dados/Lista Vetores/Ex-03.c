#include <stdio.h>

int main(){

    int vetor[100];
    int i;

    /*Injetando dados no vetor*/
    for (i = 0; i < 100; i++){
        vetor[i] = 100 - i;
    }

    /*Acessando os dados do indice*/
    for (i = 0; i < 100; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    puts("");

    return 0;
}