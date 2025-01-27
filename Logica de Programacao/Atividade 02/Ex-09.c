#include <stdio.h>

int main(){

    float nota;

    printf("Qual foi a nota da avaliacao ? ");
    scanf("%f", &nota);

    if (nota >= 7){

        printf("\nNota: %.2f\n", nota);
        printf("Situacao: Aprovado !\n\n");

    } else if (nota >= 4){

        printf("\nNota: %.2f\n", nota);
        printf("Situacao: Recuperacao !\n\n");

    } else{

        printf("\nNota: %.2f\n", nota);
        printf("Situacao: Reprovado !\n\n");

    }

    return 0;
}