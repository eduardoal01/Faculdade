#include <stdio.h>

int main(){
	
	int num, i, resultado;
	
	resultado = 0;
	
	for (i = 0; i < 5; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		resultado += num;
			
	}
 
	printf("\nResultado da soma dos numeros: %d", resultado);
	printf("\nMedia dos numeros: %d\n", resultado / i);
	
	return 0;
}
