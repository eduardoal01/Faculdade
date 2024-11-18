#include <stdio.h>

int main(){
	
	int nota;
	
	printf("Informe a nota: ");
	scanf("%d", &nota);
	
	switch(nota){
		
		// Forma simplificada de utilizar o case para verificar mais de uma condição igual
		case 0 ... 4:
			printf("\nNota: %d\n", nota);
			printf("Condicao: Reprovado\n");
			break;
			
		// forma padrão	de utilizar o case para verificar mais de uma condição igual
		case 5:
		case 6:
			printf("\nNota: %d\n", nota);
			printf("Condicao: Recuperacao\n");
			break;
		
		case 7 ... 10:
			printf("\nNota: %d\n", nota);
			printf("Condicao: Aprovado\n");
			break;
			
		default:
			printf("\nNota Invalida !\n");
		
	}
	
	return 0;
}
