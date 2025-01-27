#include <stdio.h>
#include <limits.h>

#define num 50

int main(){

    int vetor[num];

    int i, qtd_par = 0, qtd_impar = 0, maior_par = INT_MIN, menor_impar = INT_MAX;
    
    float media_par, media_impar, total_par = 0.0, total_impar = 0.0;

    /*Recebendo os numeros do usuario e salvando no vetor*/
    for (i = 0; i < num; i++){

        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

    }

    /*Separando os numeros impar do par e acumulando seus valores e quantidades junto com o ultimo valor de impar e par*/
    /*E verificando o maior numero par e o menor numero impar*/
    for (i = 0; i < num; i++){

        if (vetor[i] % 2 == 0){

            total_par += vetor[i];
            qtd_par++;

            if (vetor[i] > maior_par) {

                maior_par = vetor[i];

            }

        } else {
            
            total_impar += vetor[i];
            qtd_impar++;

            if (vetor[i] < menor_impar) {

                menor_impar = vetor[i];

            }
       }
    }

    /*Calculando a media dos numeros impar e par*/
    if (qtd_par > 0){

        media_par = total_par / qtd_par;

    }
    
    if (qtd_impar > 0){

        media_impar = total_impar / qtd_impar;

    }
    
    printf("\nMedia dos numeros pares: %.2f\n", media_par);
    printf("Media dos numeros impares: %.2f\n", media_impar);    

    printf("\nMaior numero par: %d\n", maior_par);
    printf("Menor numero impar: %d\n", menor_impar);

    printf("\nNumeros pares e impares acima de suas medias\n");
    /*imprimindo os numeros pares e impares acima da media deles*/   
    for (i = 0; i < num; i++){

        if (vetor[i] % 2 == 0 && vetor[i] > media_par){

            printf("\nNumero par = %d\n", vetor[i]);

        } else if (vetor[i] % 2 != 0 && vetor[i] > media_impar){

            printf("\nNumero impar = %d\n", vetor[i]);
            
        }     
    }
    
    return 0;
}