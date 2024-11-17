#include <stdio.h>


int main(){

    int vetor[100];
    int i;

    /*Injetando os numeros no indice do vetor*/
    for ( i = 0; i < 100; i++){
        vetor[i] = i + 1;  
    }

    /*Pecorrendo os indices acessando seus dados*/
    for (i = 0; i < 100; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    puts("");
    
    return 0;
}