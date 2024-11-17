#include <stdio.h>

#define porcetagemSalario 30.0 / 100

float calculoprestacaoMensal(float valorCasa, int pagamentoAnual);

float verificacaoSalario(float salario);

int main(){

    float valorCasa, salarioComprador, valorPrestacaoMensal, ExcedenciaSalario;
    int pagamentoAnual;

    printf("Qual o valor da casa ? ");
    scanf("%f", &valorCasa);

    printf("Qual o salario do comprador ? ");
    scanf("%f", &salarioComprador);

    printf("Pretende pagar o emprestimo em quantos anos ? ");
    scanf("%d", &pagamentoAnual);

    valorPrestacaoMensal = calculoprestacaoMensal(valorCasa, pagamentoAnual);

    ExcedenciaSalario = verificacaoSalario(salarioComprador);

    if ( valorPrestacaoMensal > ExcedenciaSalario){

        printf("\nValor da casa: %.2f", valorCasa);
        printf("\nSalario do Comprador: %.2f", salarioComprador);
        printf("\nQuitacao do emprestimo: %d ano", pagamentoAnual);
        printf("\nValor das parcelas Mensais: %.2f", valorPrestacaoMensal);
        printf("\nExcedencia do salario: %.2f - Sim", ExcedenciaSalario);
        printf("\nCondicao: Emprestimo Negado !\n\n");

    } else{

        printf("\nValor da casa: %.2f", valorCasa);
        printf("\nSalario do Comprador: %.2f", salarioComprador);
        printf("\nQuitacao do emprestimo: %d ano", pagamentoAnual);
        printf("\nValor das parcelas Mensais: %.2f", valorPrestacaoMensal);
        printf("\nExcedencia do salario: %.2f - Nao", ExcedenciaSalario);
        printf("\nCondicao: Emprestimo Liberado !\n\n");
    }

    return 0;
}

float calculoprestacaoMensal(float valorCasa, int pagamentoAnual){

    return valorCasa / (pagamentoAnual * 12);
}

float verificacaoSalario(float salario){

    return salario * porcetagemSalario;
}