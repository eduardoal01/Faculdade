#include <stdio.h>

#define desconto 10/100

int main(){
	
	float preco, produto[20], total;
	
	printf("Nome do Produto: ");
	scanf("%s", &produto);
	
	printf("Valor do Produto: ");
	scanf("%f", &preco);
	
	total = preco * desconto;
	
	total = preco - total;
	
	printf("\nProduto: %s\n", produto);
	
	printf("Valor: %.2f\n", preco);
	
	printf("Valor com desconto: %.2f\n", total);
	
	return 0;
	
	
}
