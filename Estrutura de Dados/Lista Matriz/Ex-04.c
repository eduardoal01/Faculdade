#include <stdio.h>

#define linha 2
#define coluna 4

int main(){


    int matriz_01[linha][coluna];
    int matriz_02[linha][coluna];
    int matriz_produto[linha][coluna];

    int i, j;

    for (i = 0; i < linha; i++){

        for (j = 0; j < coluna; j++){
            
            printf("Matriz_01 [%d][%d]\n", i, j);
            printf("Digite um numero: ");
            scanf("%d", &matriz_01[i][j]);
        }
        
        printf("\n");
    }
    
    for (i = 0; i < linha; i++){

        for (j = 0; j < coluna; j++){

            printf("Matriz_02 [%d][%d]", i, j);
            printf("Digite um numero: ");
            scanf("%d", &matriz_02[i][j]);
        }        

        printf("\n");
    }

    for (i = 0; i < linha; i++){
        
        for (j = 0; j < coluna; j++){

            matriz_produto[i][j] = matriz_01[i][j] * matriz_02[i][j];   
        }
    }
    
    printf("\nResultado do produto dos elementos da matriz_01 * matriz_02\n\n");
    
    for (i = 0; i < linha; i++){

        for (j = 0; j < coluna; j++){
            
            printf(" | %d | ", matriz_produto[i][j]);
        }

        printf("\n");
    }

    printf("\n");
    
    return 0;
}