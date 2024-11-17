#include <stdio.h>

int main(){

    int i, num, result;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for ( i = 1; i <= 15 ; i++){
        
        result = num * i;

        printf("%d x %d = %d\n", num, i, result);
    }
    
    return 0;
}