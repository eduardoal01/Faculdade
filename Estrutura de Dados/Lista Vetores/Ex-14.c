#include <stdio.h>
#include <math.h>

#define quantidade 15

int main(){

    int num[quantidade];
    double raiz[quantidade];
    int i;

    /*Recebendo os numeros digitados pelo usuario e salvando no vetor num*/
    for (i = 0; i < quantidade; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    /*Calculando as raizes quadradas dos numeros digitados e salvando no vetor raiz*/
    for (i = 0; i < quantidade; i++){
        if (num[i] < 0 ){
            raiz[i] = -1;    
        }else{
            raiz[i] = sqrt(num[i]);
        }
    }
    
    printf("\nImprimindo a raiz quadrada dos numeros digitados\n\n");

    /*Imprimindo a raiz quadrada dos numeros com duas casas decimais*/
    for (i = 0; i < quantidade; i++){
        printf("Numero digitado %d: Raiz quadrada = %.2lf\n", num[i], raiz[i]);
    }

    return 0;
}