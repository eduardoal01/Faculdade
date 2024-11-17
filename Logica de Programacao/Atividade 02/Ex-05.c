#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite um numero: ");
    scanf("%d", &num2);

    printf("Digite um numero: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        printf("\nMaior numero informado: %d\n", num1);

    }else if (num2 > num3)
    {
        printf("\nMaior numero informado: %d\n", num2);
    } else
    {
        printf("\nMaior numero informado: %d\n", num3);
    }

    return 0;
}