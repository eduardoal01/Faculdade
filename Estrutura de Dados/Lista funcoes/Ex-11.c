#include <stdio.h>

float soma(float a, float b);

float subtracao(float a, float b);

float multiplicacao(float a, float b);

float divisao(float a, float b);

int main(){

    float num1, num2;
    int operacoes;

    do{
        
        printf("\nOperacoes matematicas\n");
        printf("\n1 - Soma");
        printf("\n2 - Subtracao");
        printf("\n3 - Multiplicacao");
        printf("\n4 - Divisao");
        printf("\nO - Sair\n");
        printf("\nEscolha uma Opcao: ");
        scanf("%d", &operacoes);

        switch (operacoes){
    
            case 0:

                printf("\nVoce fechou o Programa !\n\n");
                break;

            case 1:

                printf("\nInforme um numero: ");
                scanf("%f", &num1);

                printf("Informe um numero: ");
                scanf("%f", &num2);

                printf("\nOpcao escolhida: Soma");
                printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, soma(num1,num2));

                break;
            
            case 2:

                printf("\nInforme um numero: ");
                scanf("%f", &num1);

                printf("Informe um numero: ");
                scanf("%f", &num2);

                printf("\nOpcao escolhida: Subtracao");
                printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, subtracao(num1,num2));

                break;

            case 3:
                
                printf("\nInforme um numero: ");
                scanf("%f", &num1);

                printf("Informe um numero: ");
                scanf("%f", &num2);

                printf("\nOpcao escolhida: Multiplicacao");
                printf("\nResultado: %.2f x %.2f = %.2f\n", num1, num2, multiplicacao(num1,num2));

                break;

            case 4:

                printf("\nInforme um numero: ");
                scanf("%f", &num1);

                printf("Informe um numero: ");
                scanf("%f", &num2);

                printf("\nOpcao escolhida: Divisao");
                printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, divisao(num1,num2));

                break;

            default:
                printf("\nOpcao Invalida !\n");
                break;

        }   
         
    } while (operacoes != 0);
    
    return 0;
}

float soma(float a, float b){

    return a + b;
}

float subtracao(float a, float b){

    return a - b;
}

float multiplicacao(float a, float b){

    return a * b;
}

float divisao(float a, float b){

    return a / b;
}