#include <stdio.h>

float CalculoIMC(float peso, float altura);

int main(){

	float pesoC, alturaC, IMC = 0;
	
	printf("Qual seu peso ? ");
	scanf("%f", &pesoC);
	
	printf("Qual sua altura ? ");
	scanf("%f", &alturaC);
	
	IMC = CalculoIMC(pesoC, alturaC);
	
	printf("\n");
	
	if (IMC < 18.5) {
		
		printf("Valor do IMC: %.2f", IMC);
		printf("\n");
		printf("Classificacao: Abaixo do Peso");
		printf("\n");
		
		
	} else if (IMC >= 18.5 && IMC <= 24.5) {
		
		printf("Valor do IMC: %.2f", IMC);
		printf("\n");
		printf("Classificacao: Normal");
		printf("\n");
		
	} else if (IMC > 25) {
		
		printf("Voce esta com sobrepeso !");
		printf("\n");
		
		if (IMC >= 25 && IMC <= 29.9){
			
			printf("Valor do IMC: %.2f", IMC);
			printf("\n");
			printf("Classificacao: Pre-Obeso");
			printf("\n");
			
		} else if (IMC >= 30 && IMC <= 34.9) {
			
			printf("Valor do IMC: %.2f", IMC);
			printf("\n");
			printf("Classificacao: Obeso I");
			printf("\n");

		} else if (IMC >= 35 && IMC <= 39.9) {
			
			printf("Valor do IMC: %.2f", IMC);
			printf("\n");
			printf("Classificacao: Obeso II");
			printf("\n");
			
		}else{ 
			
			printf("Valor do IMC: %.2f", IMC);
			printf("\n");
			printf("Classificacao: Obeso III");
			printf("\n");
			
		}
	} else {
		
		printf("Erro no Algoritmo !");
		printf("\n");	
	}
	return 0;
}

float CalculoIMC(float peso, float altura){
	
	float result = 0;
	
	result = peso / ( altura * altura );
	
	return result;
		
} 


