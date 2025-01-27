#include <stdio.h>

#define num 100

int main(){

    int quantidade_vendida[num];

    int i;

    float preco_mercadoria[num];

    float faturamento_mes = 0.0;

    for (i = 0; i < num; i++){
        
        printf("Id da Mercadoria: %d\n", i + 1);
        
        printf("Quantidade vendida ? ");
        scanf("%d", &quantidade_vendida[i]);

        printf("Qual o preco da mercadoria ? ");
        scanf("%f", &preco_mercadoria[i]);
        
        printf("\n");
    }

    for (i = 0; i < num; i++){

        faturamento_mes += preco_mercadoria[i] * quantidade_vendida[i];
    }
    
    printf("Faturamento do mes: %.2f\n\n", faturamento_mes);

    return 0;
}