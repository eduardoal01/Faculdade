#include <stdio.h>

int main(){

    int vetor[50];
    int i;

    /* Injetando os numeros no indice do vetor.
    Os indices do vetor vão de 0 a 49, ou seja seu tamamho é de 50 posições*/
    for (i = 0; i < 50; i++){
        
        vetor[i] = i + 1;

    }

    /*Acessando os indices e seus dados presente no vetor*/
    for (i = 0; i < 50; i++){

        printf("Vetor[%d] = %d\n", i, vetor[i]);

    }
    puts("");
    
    return 0;
}