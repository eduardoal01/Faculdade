#include <stdio.h>

int main(){

    float vetor[10];
    float altura = 0.0, media;
    int i;

    /*Recebendo a altura dos 10 atletas e salvando no vetor. com isso a variavel "altura" 
    esta acumulando as alturas dos atletas*/
    for (i = 0; i < 10; i++){
        printf("Digite a altura do atleta numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
        altura += vetor[i];
    }
    
    /*Fazendo a media da altura dos atletas com os valores acumulados na variavel "altura"*/
    media = altura / 10;

    printf("\nMostrando quais atletas tem a altura acima da media\n\n");
    
    /*Imprimindo os atletas que tem a altura acima da media*/
    for (i = 0; i < 10; i++){
        if (vetor[i] > media){
            printf("Atleta %d = %.2f\n", i + 1, vetor[i]);    
        }
    }
    
    return 0;
}