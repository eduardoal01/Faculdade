#include <stdio.h>

int main(){

    int idade;

    printf("Qual sua idade ? ");
    scanf("%d", &idade);

    switch (idade)
    {
        case 0 ... 11:
            printf("\nIdade: %d\n", idade);
            printf("Classificacao: Crianca\n\n");
            break;
        
        case 12 ... 17:
            printf("\nIdade: %d\n", idade);
            printf("Classificacao: Adolescente\n\n");
            break;   

        case 18 ... 29:
            printf("\nIdade: %d\n", idade);
            printf("Classificacao: Jovem\n\n");
            break;

        case 30 ... 59:
            printf("\nIdade: %d\n", idade);
            printf("Classificacao: Adulto\n\n");
            break;

        default:
            printf("\nIdade: %d\n", idade);
            printf("Classificacao: Idoso\n\n");
            break;

    }


    return 0;
}