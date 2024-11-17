#include <stdio.h>


int main(){

    int vetor[50];
    int i, j = 0;


    /*Armazenando os valores impas no intrvalo de 1 a 100 nos indices do vetor*/
    for (i = 1; i < 101; i++){
        if(i % 2 == 1){
            vetor[j] = i;
            j++;
        }
    }
    
    /*Imprimindo os dados no indice do vetor*/
    for (i = 0; i < j; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    puts("");

    return 0;
}