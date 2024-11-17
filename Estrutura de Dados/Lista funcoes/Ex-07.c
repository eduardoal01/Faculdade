#include <stdio.h>

float calculoArea(float larguraC, float comprimentoC);

int main(){

    float largura, comprimento, area;

    printf("Qual a largura do terreno ? ");
    scanf("%f", &largura);

    printf("Qual o comprimento do terreno ? ");
    scanf("%f", &comprimento);

    area = calculoArea(largura, comprimento);

    if (area < 100) {

        printf("\nLargura do terreno: %.2f", largura);
        printf("\nComprimento do terreno: %.2f", comprimento);
        printf("\nArea do terreno: %.2f", area);
        printf("\nClassificacao: Terreno Popular\n\n");

    }else if (area >= 100 && area <= 500) {

        printf("\nLargura do terreno: %.2f", largura);
        printf("\nComprimento do terreno: %.2f", comprimento);
        printf("\nArea do terreno: %.2f", area);
        printf("\nClassificacao: Terreno Master\n\n");
    
    } else{

        printf("\nLargura do terreno: %.2f", largura);
        printf("\nComprimento do terreno: %.2f", comprimento);
        printf("\nArea do terreno: %.2f", area);
        printf("\nClassificacao: Terreno Vip\n\n");
    }

    return 0;
}

float calculoArea(float larguraC, float comprimentoC){
    
    return larguraC * comprimentoC;
}