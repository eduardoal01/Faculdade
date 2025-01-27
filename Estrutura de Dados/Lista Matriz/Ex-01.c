#include <stdio.h>

#define num 2

int main(){

    int matriz_01[num][num];
    int matriz_02[num][num];
    int matriz_soma[num][num];
    
    int i, j;

    for (i = 0; i < num; i++){

        for (j = 0; j < num; j++){

            printf("Matriz_01: indice = [%d][%d]\n", i, j);
            printf("Digite um valor: ");
            scanf("%d", &matriz_01[i][j]);
            
        }
        printf("\n");
    }

    for (i = 0; i < num; i++){

        for (j = 0; j < num; j++){

            printf("Matriz_02: indice = [%d][%d]\n", i, j);
            printf("Digite um valor: ");
            scanf("%d", &matriz_02[i][j]);

            
        }
        printf("\n");
    }

    for (i = 0; i < num; i++){
        
        for (j = 0; j < num; j++){
            
            matriz_soma[i][j] = matriz_01[i][j] + matriz_02[i][j];
            
        }
    }

    printf("Matriz_soma\n");

    for (i = 0; i < num; i++){

        printf("    %d ", i);
        
    }
    
    printf("\n");

    for (i = 0; i < num; i++){
        printf("%d ", i);
        for (j = 0; j < num; j++){
            
            printf("| %d | ", matriz_soma[i][j]);   
    
        }
        
        printf("\n");
    }

    return 0;
}