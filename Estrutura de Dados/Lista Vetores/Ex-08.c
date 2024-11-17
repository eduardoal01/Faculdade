#include <stdio.h>

int main(){

    int vetor[100];
    int i, j = 0;

    /*Verificando os 100 primeiros numeros impares e salvando os valores no indice do vetor*/
    for (i = 1; i <= 200; i++){
        if (i % 2 == 1){
            vetor[j] = i;
            j++;
        }
    }

    
    printf("\nMostrando os 100 primeiros numeros impares\n\n");
    
    /*Acessando os valores salvos no vetor*/
    for (i = 0; i < j; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    puts("");

    return 0;
}