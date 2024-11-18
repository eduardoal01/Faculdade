#include <stdio.h>

#define ano_atual 2024

int main(){
	
	int ano_nasc, nome[20], idade;
	
	printf("Qual seu nome ? ");
	scanf("%s", &nome);
	
	printf("Em que ano voce nasceu ? ");
	scanf("%d", &ano_nasc);
	
	idade = ano_atual - ano_nasc;
	
	printf("\nSeu nome: %s\n", nome);
	
	printf("Sua idade: %d\n", idade);
	
	return 0;
}
