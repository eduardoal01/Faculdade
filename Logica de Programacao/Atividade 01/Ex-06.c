#include <stdio.h>

int main(){
	
	float salarioL, salarioB, desconto, impostoR;
	
	printf("Quanto eh o seu salario bruto ? ");
	scanf("%f", &salarioB);
	
	printf("Quantos porcento de imposto de renda voce vai pagar ? ");	
	scanf("%f", &impostoR);
	
	desconto = (impostoR / 100) * salarioB;
	
	salarioL = salarioB -  desconto;
	
	printf("\nSalario Bruto: %.2f Reais\n", salarioB);
	printf("Valor do Imposto de renda: %.2f porcento\n", impostoR);
	printf("Desconto do Imposto de Renda: %.2f Reais\n", desconto);
	printf("Salario Liquido: %.2f reais\n", salarioL);
	
	
	return 0;
}
