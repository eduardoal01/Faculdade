#include <stdio.h>

#define qtd_alunos 4

int main(){

    float altura_alunos[qtd_alunos];
    int codigo_alunos[qtd_alunos];

    int i, qtd_feminina = 0, codigo_sexo;
    float altura, media_geral, media_feminina, altura_geral = 0.00, altura_feminina = 0.00;

    for (i = 0; i < qtd_alunos; i++){
        printf("Qual a altura do aluno ? ");
        scanf("%f", &altura);
        
        printf("Codigo de sexo: 1 = M, 2 = F ? ");
        scanf("%d", &codigo_sexo);

        altura_alunos[i] = altura;
        codigo_alunos[i] = codigo_sexo;
    }

    puts("");

    for (i = 0; i < qtd_alunos; i++){
        altura_geral += altura_alunos[i];

        if (codigo_alunos[i] == 2){
            altura_feminina += altura_alunos[i];
            qtd_feminina ++;
        } 
    }
    
    media_geral = altura_geral / qtd_alunos;
    media_feminina = altura_feminina / qtd_feminina; 

    for (i = 0; i < qtd_alunos; i++){
        printf("altura[%d] = %.2f", i, altura_alunos[i]);
        printf("codigo[%d] = %d\n", i, codigo_alunos[i]);
    }
    
    return 0;
}