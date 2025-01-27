#include <stdio.h>

#define linha 2
#define coluna 3

int main(){

    float matriz_01[linha][coluna];
    float matriz_02[linha][coluna];
    float matriz_soma[linha][coluna];

    int i, j;

    for (i = 0; i < linha; i++){

        for (j = 0; j < coluna; j++){

            printf("Matriz_01 [%d][%d]\n", i, j);
            printf("Digite um valor: ");
            scanf("%f", &matriz_01[i][j]);
            
        }

        printf("\n");
    }
    
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++){

            printf("Matriz_02 [%d][%d]", i, j);
            printf("Digite um valor: ");
            scanf("%f", &matriz_02[i][j]);
        }
        
        printf("\n");
    }

    for (i = 0; i < linha; i++){

        for (j = 0; j < coluna; j++){

            matriz_soma[i][j] = matriz_01[i][j] + matriz_02[i][j];   
        }
    }

    printf("\nResultado da soma da matriz 1 + matriz 2\n\n");

    for (i = 0; i < linha; i++){

        for (j = 0; j < coluna; j++){

            printf("| %2.f |", matriz_soma[i][j]);

        }

        printf("\n");
    }
      
    printf("\n");
    
    return 0;
}