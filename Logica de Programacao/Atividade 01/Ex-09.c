#include <stdio.h>

int main(){
	
	int mes;
		
	do{		
		printf("\n0 - Sair\n");

		printf("\nDigite um numero de 1 a 12: ");
		scanf("%d", &mes);
		
		
		switch(mes){
			case 0:
				printf("\nVoce finalizou o programa !\n");
				break;
			
			case 1:
				printf("\n1 = Janeiro\n");
				break;
					
		    case 2:
				printf("\n2 = Fevereiro\n");
				break;
				
			case 3:
				printf("\n3 = Marco\n");
				break;
				
			case 4:
				printf("\n4 = Abril\n");
				break;
				
			case 5:
				printf("\n5 = Maio\n");
				break;
				
			case 6:
				printf("\n6 = Junho\n");
				break;
				
			case 7:
				printf("\n7 = Julho\n");
				break;
				
			case 8:
				printf("\n8 = Agosto\n");
				break;
				
			case 9:
				printf("\n9 = Setembro\n");
				break;
				
			case 10:
				printf("\n10 = Outubro\n");
				break;
				
			case 11:
				printf("\n11 = Novembro\n");
				break;
				
			case 12:
				printf("\n12 = Dezembro\n");
				break;
			
			default:
				printf("\nNumero Invalido !\n");
				
		}
	}while(mes != 0);
	
	
	
	return 0;
}
