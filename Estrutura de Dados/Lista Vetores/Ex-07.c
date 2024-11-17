#include <stdio.h>

int main(){

    int vetor[50];
    int i, j = 0;

    /*Verificando os numeros pares no intervalo de 1 a 100 e jogando os resultados no indice do vetor*/
    for (i = 1; i < 101; i++){
        if (i % 2 == 0){
            vetor[j] = i;
            j++;
        }   
    }

    /*Imprimindo os numeros pares salvos no vetor*/
    printf("\nNumeros par no intervalo de 1 a 100\n\n");
    for (i = 0; i < j; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    puts("");
    
    return 0;
}