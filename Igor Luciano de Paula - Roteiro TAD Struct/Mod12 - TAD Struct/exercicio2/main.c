#include <stdio.h>
#include <stdlib.h>
#define NUMERO_ALUNOS 5
#define PROVAS 3

/*********************************************************************************************
 *********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod12_TAD_Struct - Roteiro: Exerc�cio N. 2:
 ** Fa�a um programa que use a estrutura Aluno do exerc�cio 1. O programa dever� declarar uma
 ** turma de 5 alunos, ler o c�digo e as notas de todos os alunos. Logo em seguida o programa
 ** dever� imprimir a m�dia de cada aluno.
 **
 *********************************************************************************************
 ********************************************************************************************/

struct Aluno {
    int codigo;
    double notas[3];
    double media;
};

int main() {
    struct Aluno turma[NUMERO_ALUNOS];
    int i, j;

    for ( i = 0; i < NUMERO_ALUNOS; i++) {   //turma
        printf("Digite o c�digo: ");
        scanf("%d", &turma[i].codigo); printf("\n");

        for( j = 0; j < PROVAS ; j++) {      //notas
            printf("Digte a %d nota do aluno %d: ", ( j + 1 ), ( i + 1 ) );
            scanf("%lf", &turma[i].notas[j]);
        }

        turma[i].media = (turma[i].notas[0]+turma[i].notas[1]+turma[i].notas[2])/3;

        printf("\nMatr�cula: %d\n", turma[i].codigo);

        if ( turma[i].media >= 6 )
            printf("Parab�ns aluno %d! Sua m�dia � %.2lf e voc� est� aprovado.\n\n", turma[i].codigo, turma[i].media);
        else // media < 6
            printf("Aluno %d voc� est� de exame especial! Sua m�dia � %.2lf.\n\n", turma[i].codigo, turma[i].media);

    }

    return (0);
}
