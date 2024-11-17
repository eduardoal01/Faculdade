#include <stdio.h>

int main(){
	
	float salario,salarioN, aumento, porcento;
	
	
	printf("Qual seu salario ? ");
	scanf("%f", &salario);
	
	if(salario < 2000){
		
		porcento = 10.0 / 100;
		
		aumento = salario * porcento;
		
		salarioN = salario + aumento;
		
		printf("\nVoce tera um aumento de %.0f porcento no seu salario !\n", porcento * 100 );
		printf("Salario: %.2f\n", salario);
		printf("Aumento: %.2f\n", aumento);
		printf("nNovo Salario: %.2f\n", salarioN);
	} else{
		
		porcento = 5.0/100;
		
		aumento = salario * porcento;
		
		salarioN = salario + aumento;
		
		printf("\nVoce tera um aumento de %.0f no seu salario !\n", porcento * 100);
		printf("Salario: %.2f\n", salario);
		printf("Aumento: %.2f\n", aumento);
		printf("nNovo Salario: %.2f\n", salarioN);
	}
	return 0;
}
