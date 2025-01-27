#include <stdio.h>

#define qtd_dias 121

int main(){
    
    int temperatura[qtd_dias];

    int i, maior_temperatura, menor_temperatura, qtd_dias_abaixo_media = 0;

    float temperatura_media, temperatura_total = 0.0; 

    printf("Informe a temperatura dos %d dias, que ficaram entre 15 e 40 graus\n\n", qtd_dias);

    for (i = 0; i < qtd_dias; i++){

        printf("Informe a temperatura do dia %d: ", i + 1);
        scanf("%d", &temperatura[i]);

        temperatura_total += temperatura[i];
    }

    maior_temperatura = temperatura[0];
    menor_temperatura = temperatura[0];

    for (i = 1; i < qtd_dias; i++){

        if (temperatura[i] > maior_temperatura){

            maior_temperatura = temperatura[i];
        }
        
        if (temperatura[i] < menor_temperatura){

            menor_temperatura = temperatura[i];
        }    
    }

    temperatura_media = temperatura_total / qtd_dias;

    for (i = 0; i < qtd_dias; i++){

        if (temperatura[i] < temperatura_media){

            qtd_dias_abaixo_media++;
        }
    }

   printf("\nMenor temperatura ocorrida: %d\n", menor_temperatura);
   printf("Maior temperatura ocorrida: %d\n", maior_temperatura);
   printf("Temperatura media: %.2f\n", temperatura_media);
   printf("Quantidades de dias que a temperatura ficou abaixo da media: %d\n\n", qtd_dias_abaixo_media);
   
   return 0;
}