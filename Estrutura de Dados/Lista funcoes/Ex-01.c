#include <stdio.h>

#define valor_dia  90.0
#define valor_km  0.20

float quantidadeKm(float QtdKm);

float quantidadeDia(float QtdDia);

int main(){

    float QtdKm, QtdDias, totalPagarKm, totalPagarDia, totalPagar;

    printf("O carro andou quantos Km ? ");
    scanf("%f", &QtdKm);

    printf("O carro foi alugado por quantos dias ? ");
    scanf("%f", &QtdDias);


    totalPagarKm = quantidadeKm(QtdKm);

    totalPagarDia = quantidadeDia(QtdDias);

    totalPagar = totalPagarDia + totalPagarKm;

    printf("\nValor a pagar dos Km: %.2f", totalPagarKm);
    printf("\nValor a pagar dos dias: %.2f", totalPagarDia);
    printf("\nValor final a pagar: %.2f\n\n", totalPagar);

    return 0;
}

float quantidadeKm(float QtdKm){

    return QtdKm * valor_km;
}

float quantidadeDia(float QtdDias){

    return QtdDias * valor_dia;
}