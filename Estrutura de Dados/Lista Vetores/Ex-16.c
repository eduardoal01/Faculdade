#include <stdio.h>

#define qtd_alunos 10

int main(){

    float altura_alunos[qtd_alunos];
    int codigo_alunos[qtd_alunos];

    int i, qtd_feminina = 0, codigo_sexo;
    float altura, media_geral, media_feminina, altura_geral = 0.00, altura_feminina = 0.00, maior_altura = 0.0, menor_altura = 0.0;

    /*Recebendo a altura e o sexo*/
    for (i = 0; i < qtd_alunos; i++){
        printf("Qual a altura do aluno ? ");
        scanf("%f", &altura);

        printf("Codigo de sexo: 1 = M, 2 = F ? ");
        scanf("%d", &codigo_sexo);

        printf("\n");

        // vetores de armazenamento das alturas e do sexo
        altura_alunos[i] = altura;
        codigo_alunos[i] = codigo_sexo;
    }

    /*recebendo a altura media geral dos alunos e a altura media feminina*/
    for (i = 0; i < qtd_alunos; i++){
        altura_geral += altura_alunos[i];

        if (codigo_alunos[i] == 2){

            altura_feminina += altura_alunos[i];

            qtd_feminina ++; // obtendo o total de meninas
        } 
    }
    
    /*Calculando a altura media geral dos alunos e a altura media feminina*/
    media_geral = altura_geral / qtd_alunos;
    media_feminina = altura_feminina / qtd_feminina; 

    /*recebendo as alturas para comparar a maior e a menor altura da turma*/
    maior_altura = altura_alunos[0];
    menor_altura = altura_alunos[0];

    /*Comparando a Maior e menor altura da turma*/
    for (i = 1; i < qtd_alunos; i++){

        // maior altura da turma
        if (altura_alunos[i] > maior_altura)
        {
            maior_altura = altura_alunos[i];
        }

        // menor altura da turma
        if (altura_alunos[i] < menor_altura)
        {
            menor_altura = altura_alunos[i];
        }
    }

    printf("Mostrando a maior e menor altura dos alunos\n");
    printf("\nMaior altura = %.2f", maior_altura);
    printf("\nMenor altura = %.2f\n", menor_altura);


    printf("\nMostrando as menina com altura acima da media, entre elas\n\n");

    /*Verificando quais meninas tem a altura acima da media, entre elas*/
    for (i = 0; i < qtd_alunos; i++){

        // pegando as alturas das meninas
        if(codigo_alunos[i] == 2){

            //mostrando as meninas com altura acima da media
            if (altura_alunos[i] > media_feminina){

                printf("%.2f\n", altura_alunos[i]);
            }  
        }
    }

    printf("\nMostrando as alturas abaixo da media dos alunos\n\n");

    /*Verificando os alunos que tem a altura abaixo da media*/
    for ( i = 0; i < qtd_alunos; i++){

        if (altura_alunos[i] < media_geral){

            printf("%.2f\n", altura_alunos[i]); // imprimindo as alturas abaixo da media
        }
    }
    
    return 0;
}