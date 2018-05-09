#include <stdio.h>
#include <stdlib.h>
#define alunos 40
#define provas 4


/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod06_vetores - Roteiro: Exercício N. 6:
 *Faça um programa que solicita que sejam digitadas 4 notas (prova 1, 2, 3 e 4) de uma turma
 *de 40 alunos. Logo em seguida o programa deve digitar a média e a situação final de cada
 *aluno: “Aprovado” se média >= 6.0 e “Reprovado” se média < 6. O programa deve imprimir
 *também o total de aprovados e reprovados.
 */

int main ()
{
    int i, j, total = 0 , notas[alunos][provas];
    float media;

    //entradas
    for ( i = 0; i < alunos; i++ )
    {
        for ( j = 0; j < provas; j++ )
        {
            printf ("Digite a %d nota do aluno %d: ", ( j + 1 ), ( i + 1 ) );
            scanf("%d", &notas[i][j]);
        }
    }

    //Cálculo da média e da situação final de cada aluno
    for ( i = 0; i < alunos; i++, total = 0 )
    {
        for ( j = 0; j < provas; j++ )
        {
            total = total + notas[i][j];
        }

        //cálculo e impressão da média
        media = ( (float) total / provas );
        printf("Média do aluno %d é: %.2f!\n", ( i + 1 ), media);

        if (media >= 6)
        {
            printf("Aluno %d APROVADO!!!\n\n", ( i + 1 ) );
        }
        else // media < 6
        {
            printf("Aluno %d REPROVADO!!!\n\n", ( i + 1 ) );
        }
    }

    system ("pause");
    return (0);
}
