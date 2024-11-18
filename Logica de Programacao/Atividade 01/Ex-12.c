#include <stdio.h>

int main(){
	
	int opcao;
	
	printf("Escolhar um numero de 1 a 4: ");
	scanf("%d", &opcao);
	
	
	switch(opcao){
		
		case 1:
			printf("\n1 - Cafe\n");
			break;
		
		case 2:
			printf("\n2 - Cha\n");
			break;
			
		case 3:
			printf("\n3 - Refrigerante\n");
			break;
			
		case 4: 
			printf("\n4 - Agua\n");
			break;
		
		default:
			printf("\nNumero Invalido !\n");
		
	}
	
	return 0;
}
