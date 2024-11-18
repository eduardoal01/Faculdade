#include <stdio.h>

float pi = 3.14;

float CalculoCirculo(float raio);

int main(){
	
	float raioC, areaC;
	
	
	
	printf("Informe o raio do circulo: ");
	scanf("%f", &raioC);
	
	areaC = CalculoCirculo(raioC);
	
	printf("Area do circulo: %.2f", areaC);
	
	return 0;
	
	
}

float CalculoCirculo(float raio){
	
	float area;
	
	area = pi * (raio * raio);
	 
	return  area;
}
