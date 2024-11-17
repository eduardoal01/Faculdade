#include <stdio.h>

float calculoValorKm(float distancia, float preco);

int main(){

    float distanciaKm, precoKm, totalPagar;

    printf("Quantos km voce prendente percorrer ? ");
    scanf("%f", &distanciaKm);

    if(distanciaKm <= 200){

        precoKm = 0.50;
        totalPagar = calculoValorKm(distanciaKm, precoKm);

        printf("\nKm a pecorrer: %.2f", distanciaKm);
        printf("\nPreco do Km: %.2f", precoKm);
        printf("\nTotal a pagar: %.2f\n\n", totalPagar);

    }else{

        precoKm = 0.45;
        totalPagar = calculoValorKm(distanciaKm, precoKm);

        printf("\nKm a pecorrer: %.2f", distanciaKm);
        printf("\nPreco do Km: %.2f", precoKm);
        printf("\nTotal a pagar: %.2f\n\n", totalPagar);
    }

    return 0;
}

float calculoValorKm(float distancia, float preco){
    return distancia * preco;
}
