#include <stdio.h>
#include <stdlib.h>

#define NUMERO_ALUNOS 10
#define NUMERO_NOTAS 4

int main (){

    double notas[NUMERO_ALUNOS][NUMERO_NOTAS]; // 10 linhas e 4 colunas
    int i=0, j=0;

    printf ("\n-=- Leitura das notas da turma -=- ");
        
    for(i=0; i < NUMERO_ALUNOS; i++){
        printf ("\nAluno %d: ", i);
        for(j=0; j < NUMERO_NOTAS; j++){
           printf ("Nota %d: ", j);
           scanf("%lf", &notas[i][j]);
        }
             
    }

    printf ("\n-=- Impressão das notas da turma  -=- \n\n\n");
        
    for(i=0; i < NUMERO_ALUNOS; i++){
        printf ("\nAluno %d: ", (i+1));
        for(j=0; j < NUMERO_NOTAS; j++){
           printf ("Nota %d: %6.2lf", (j+1), notas[i][j]);
        }
    }

    printf ("\nFim do programa!!!");
    system("pause");
    return(0);
}
