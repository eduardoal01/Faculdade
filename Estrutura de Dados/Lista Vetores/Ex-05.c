#include <stdio.h>

int main(){

    int vetor[101];
    int i;

    /*Injetando dados nos indices*/
    for (i = 0; i < 101; i++){
        vetor[i] = 200 - i;
    }
    
    /*Acessando os dados do indice*/
    for (i = 0; i < 101; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}