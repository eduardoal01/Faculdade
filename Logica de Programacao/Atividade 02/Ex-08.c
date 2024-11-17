#include <stdio.h>

int main(){

    int senha, verificacao = 1;

    

    printf("Informe sua senha: ");
    scanf("%d", &senha);

    

    if (senha == verificacao){
        printf("\nSenha Correta !\n\n");
    } else{
        printf("\nsenha incorreta\n\n");
    }

    return 0;
}