#include <stdio.h>

int main(){

    int vetor[10];
    int i, j = 0;

    /*Armazenando o quadrado dos numeros impares no intervalo de 1 a 20*/
    for (i = 1; i <= 20; i++){
        if (i % 2 == 1){
            vetor[j] = i * i;
            j++;
        }
    }

    printf("\nO quadrado dos numeros impares no intervalo de 1 a 20\n\n");

    /*Mostrando o quadrado dos numeros impares*/
    for (i = 0; i < j; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    puts("");

    return 0;
}