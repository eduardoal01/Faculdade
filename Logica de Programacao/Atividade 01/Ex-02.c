#include <stdio.h>

int main (){
	
	float prod1, prod2, prod3, total;
	
	printf("Valor do primeiro produto: ");
	scanf("%f", &prod1);
	
	printf("Valor do segundo produto: ");
	scanf("%f", &prod2);
	
	printf("Valor do terceiro produto: ");
	scanf("%f", &prod3);
	
	
	total = (prod1 + prod2 + prod3);

	printf("\nValor total: %.2f\n", total);
	
	
	return 0;
}
