#include <stdio.h>

#define limiteVelocidade 80
#define multa 5

int multaVelocidade(int velocidade);

int main(){

    int velocidadeC, valorMulta;

    printf("Qual velocidade do carro ? ");
    scanf("%d", &velocidadeC);

    valorMulta = multaVelocidade(velocidadeC);

    if (velocidadeC > limiteVelocidade){
        printf("\nVelocidade do carro: %d Km", velocidadeC);
        printf("\nCondicao: Limite de 80 Km ultrapassado");
        printf("\nMultado: Sera cobrado %d reais por Km ultrapassado", multa);
        printf("\nValor da Multa: %d reais\n\n", valorMulta);
    }else{
        printf("\nVelocidade do carro: %d Km", velocidadeC);
        printf("\nCondicao: Dentro do limite de 80 km\n\n");
    }

    return 0;
}

int multaVelocidade(int velocidade){

    return ((velocidade - limiteVelocidade) * multa);
}
