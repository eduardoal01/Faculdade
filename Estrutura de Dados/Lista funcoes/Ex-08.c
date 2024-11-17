#include <stdio.h>

float calculoAumento( float salarioC, float aumentoC);

int main(){

    char funcionario[20];
    float salario, Nsalario, aumento;
    int anoEmpresa;

    printf("Qual o nome do funcionario ? ");
    scanf("%s", funcionario);

    printf("Qual o salario do funcionario ? ");
    scanf("%f", &salario);

    printf("Quantos anos o funcionario trabalha na empresa ? ");
    scanf("%d", &anoEmpresa);
  
    if (anoEmpresa <= 3){

        aumento = 3.0/100;
        Nsalario = salario + calculoAumento(salario, aumento);
        
        printf("\nFuncionario: %s", funcionario);
        printf("\nSalario atual: %.2f", salario);
        printf("\nAnos na empresa: %d", anoEmpresa);
        printf("\nO funcionario teve um aumento de salario !");
        printf("\nPorcentagem de aumento: %.2f", aumento);
        printf("\nNovo Salario: %.2f\n\n", Nsalario);

    } else if (anoEmpresa > 3 && anoEmpresa < 10){

        aumento = 12.5/100;
        Nsalario = salario + calculoAumento(salario, aumento);
        
        printf("\nFuncionario: %s", funcionario);
        printf("\nSalario atual: %.2f", salario);
        printf("\nAnos na empresa: %d", anoEmpresa);
        printf("\nO funcionario teve um aumento de salario !");
        printf("\nPorcentagem de aumento: %.3f", aumento);
        printf("\nNovo Salario: %.2f\n\n", Nsalario);

    } else {

        aumento = 20.0/100;
        Nsalario = salario + calculoAumento(salario, aumento);
        
        printf("\nFuncionario: %s", funcionario);
        printf("\nSalario atual: %.2f", salario);
        printf("\nAnos na empresa: %d", anoEmpresa);
        printf("\nO funcionario teve um aumento de salario !");
        printf("\nPorcentagem de aumento: %.2f", aumento);
        printf("\nNovo Salario: %.2f\n\n", Nsalario);
    }

    return 0;
}

float calculoAumento(float salarioC, float aumentoC){

    return salarioC * aumentoC;
}