#include <stdio.h>
#include <stdlib.h>
#define NUMERO_ALUNOS 5
#define PROVAS 3

/*************************************************************************
 *************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod12_TAD_Struct - Roteiro: Exercício N. 3:
 ** Mude o programa 2 para que seja calculada e impressa a média da turma.
 **
 *************************************************************************
 *************************************************************************/

struct Aluno {
    int codigo;
    double notas[3];
    double media;
};

int main() {
    struct Aluno turma[NUMERO_ALUNOS];
    int i, j;
    float totalturma, mediaturma;
    totalturma = mediaturma = 0;


    for ( i = 0; i < NUMERO_ALUNOS; i++) {   //turma
        printf("Digite o código: ");
        scanf("%d", &turma[i].codigo); printf("\n");

        for( j = 0; j < PROVAS ; j++) {      //notas
            printf("Digte a %d nota do aluno %d: ", ( j + 1 ), turma[i].codigo );
            scanf("%lf", &turma[i].notas[j]);
        }

        turma[i].media = ( ( turma[i].notas[0] + turma[i].notas[1] + turma[i].notas[2] ) / 3 );

        printf("\nMatrícula: %d\n", turma[i].codigo);

        totalturma = ( totalturma + turma[i].media );

        if ( turma[i].media >= 6 )
            printf("Parabéns aluno %d! Sua média é %.2lf e você está aprovado.\n\n", turma[i].codigo, turma[i].media);
        else // media < 6
            printf("Aluno %d você está de exame especial! Sua média é %.2lf.\n\n", turma[i].codigo, turma[i].media);

    }

    mediaturma = ( totalturma / NUMERO_ALUNOS );
    printf("\nA média da turma é: %.2lf\n\n", mediaturma);

    return (0);
}
