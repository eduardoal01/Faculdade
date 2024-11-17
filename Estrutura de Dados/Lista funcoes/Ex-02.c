#include <stdio.h>

#define litroTinta 2.00

float calculoArea(float larguraC, float alturaC);

float quantidadeTinta(float areaC);

int main(){

    float largura, altura, area, QtdTinta;

    printf("Qual a largura da parede ? ");
    scanf("%f", &largura);

    printf("Qual a altura da parede ? ");
    scanf("%f", &altura);

    area = calculoArea(largura, altura);

    QtdTinta = quantidadeTinta(area);

    printf("\nArea da parede: %.2f M\n", area);
    printf("Quantidade de tinta necessaria: %.2f L\n\n", QtdTinta);

    return 0;
}


float calculoArea(float larguraC, float alturaC){

    return larguraC * alturaC;
}

float quantidadeTinta(float areaC){

    return areaC / litroTinta;
}