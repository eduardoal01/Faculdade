#include <stdio.h>

int main(){

    int i;

    for ( i = 1; i <= 100; i++){

        if(i % 2 == 0){
            printf("Numeros Pares de 1 a 100: %d\n", i);
        }
    }
    
    return 0;
}