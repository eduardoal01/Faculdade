#include <stdio.h>

int main(){

    int l1, l2, l3;

    printf("Informe o primeiro lado: ");
    scanf("%d", &l1);

    printf("Informe o segundo lado: ");
    scanf("%d", &l2);

    printf("Informe o terceiro lado: ");
    scanf("%d", &l3);

    if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){

        printf("\nTemos um trangulo: Sim !");

        if (l1 == l2 && l2 == l3) {

            printf("\nTipo do Triangulo: Equilatero\n\n");
            
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {

            printf("\nTipo do Triangulo: Isoceles\n\n");
            
        }else {

            printf("\nTipo do Triangulo: Escaleno\n\n");
            
        }
    } else{

        printf("\nTemos um triangulo: Nao");
        printf("\nCom os valores informados nao eh possivel formar um triangulo !\n\n");
    }
   
    return 0;
}
