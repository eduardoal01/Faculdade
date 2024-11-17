#include <stdio.h>

int main(){

	int semana;
		
	do {
		
		printf("\n0 - Sair\n");
		
		printf("\nDigite um numero de 1 a 7: ");
		scanf("%d", &semana);
		
		switch(semana){
			case 0:
				printf("\nVoce fechou o programa !\n");
				break;
				
			case 1:
				printf("\n1 - Domingo\n");
				break;
			
			case 2:
				printf("\n2 - Segunda-Feira\n");
				break;
			
			case 3:
				printf("\n3 - Terca-Feira\n");
				break;
			
			case 4:
				printf("\n4 - Quarta-Feira\n");
				break;
			
			case 5:
				printf("\n5 - Quinta-Feira\n");
				break;
				
			case 6:
				printf("\n6 - Sexta-Feira\n");
				break;
				
			case 7:
				printf("\n7 - Sabado\n");
				break;
			
			default:
				printf("\nNumero Invalido !\n");
				
		}
		
	}while(semana != 0);
	
	return 0;
}
