#include <stdio.h>

int main(){

    int nota;
    
    printf("Qual a nota ? ");
    scanf("%d", &nota);

    //Refazer com If com switch está errado

    switch (nota)
    {
    case 0 ... 5:
        printf("\nNota: %d\n", nota);
        printf("Classificacao: F\n\n");
        break;
    
    case 6:
        printf("\nNota: %d\n", nota);
        printf("Classificacao: D\n\n");
        break;

    case 7:
        printf("\nNota: %d\n", nota);
        printf("Classificacao: C\n\n");
        break;

    case 8:
        printf("\nNota: %d\n", nota);
        printf("Classificacao: B\n\n");
        break;

    case 9 ... 10:
        printf("\nNota: %d\n", nota);
        printf("Classificacao: A\n\n");
        break;
    
    default:
        printf("\nNota invalida !\n\n");
        break;
    }
}