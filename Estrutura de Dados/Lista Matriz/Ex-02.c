#include <stdio.h>

#define num 3

int main(){

    int matriz[num][num];

    int i, j, soma = 0;


    for (i = 0; i < num; i++){

        for (j = 0; j < num; j++){

            printf("Matriz: indices = [%d][%d]\n", i, j);
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }

        printf("\n");
    }
    
    for (i = 0; i < num; i++){
        for (j = 0; j < num; j++){
            
            soma += matriz[i][j];
        }
    }

    for (i = 0; i < num; i++){

        printf("      %d", i);
    }
    
    printf("\n\n");

    
    for (i = 0; i < num; i++){

        printf(" %d ", i);

        for (j = 0; j < num; j++){
            
            printf(" | %d | ", matriz[i][j]);
        }

        printf("\n\n");
    }

    printf("Resultado da soma dos elementos: %d\n\n", soma);
    
    return 0;
}