#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){

        printf("\nNumero: %d\n", num);
        printf("Situacao: Par\n\n");

    }else{

        printf("\nNumero: %d\n", num);
        printf("Situacao: Impar\n\n");
        
    }
    return 0;
}