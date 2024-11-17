#include <stdio.h>

int main(){

    int vetor[101];
    int i;

    /*Injetando numeros nos indices do vetor*/
    for (i = 0; i < 101; i++){
        vetor[i] = i + 100;
    }
    
    /*Acessando os dados do indice*/
    for (i = 0; i < 101; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    puts("");

    return 0;
}