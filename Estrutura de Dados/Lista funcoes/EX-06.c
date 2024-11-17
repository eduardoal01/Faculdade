#include <stdio.h>

float calculoDesconto(float valor, float desconto);

int main(){

    char nome[20], sexo;

    float valorCompras, descontoCompras, valorPagar;

    printf("Qual o nome do cliente ? ");
    scanf("%s", nome);

    printf("Qual o sexo [M] ou [F] ? ");
    scanf(" %c", &sexo);

    printf("Qual o valor das compras ? ");
    scanf("%f", &valorCompras);

    switch (sexo){

        case 'M':
        case 'm':

            descontoCompras = 5.0/100;
            valorPagar = valorCompras - calculoDesconto(valorCompras, descontoCompras);

            printf("\nCliente: %s", nome);
            printf("\nSexo: %c", sexo);
            printf("\nValor das Compras: %.2f", valorCompras);
            printf("\nDesconto promocional: %.2f", descontoCompras);
            printf("\nValor a pagar: %.2f\n\n", valorPagar);         
            break;
        
        case 'F':
        case 'f':

            descontoCompras = 13.0/100;
            valorPagar = valorCompras - calculoDesconto(valorCompras, descontoCompras);

            printf("\nCliente: %s", nome);
            printf("\nSexo: %c", sexo);
            printf("\nValor das Compras: %.2f", valorCompras);
            printf("\nDesconto promocional: %.2f", descontoCompras);
            printf("\nValor a pagar: %.2f\n\n", valorPagar);
            break;

        default:

            printf("\nCampo sexo incorreto !\n\n");
            break;
    }

    return 0;
}

float calculoDesconto(float valor, float desconto){

    return valor * desconto;
}
