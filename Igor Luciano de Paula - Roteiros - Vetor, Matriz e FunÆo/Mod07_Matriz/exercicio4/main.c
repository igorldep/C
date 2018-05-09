#include <stdio.h>
#include <stdlib.h>
#define alunos 40
#define provas 4

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Matriz - Roteiro: Exercício N. 4:
 *Faça um programa que solicita que sejam digitadas 4 notas (prova 1, 2, 3 e 4) de uma turma de 40
 *alunos. Logo em seguida o programa deve digitar a média e a situação final de cada aluno: “Aprovado”
 *se média >= 6.0 e “Reprovado” se média < 6. O programa deve imprimir também o total de aprovados e
 *reprovados.
 */


int main ()
{
    int i, j, aprovados = 0, reprovados = 0;
    float mat[alunos][provas], media, acumulador;


    for ( i = 0; i < alunos; i++ )
    {
        acumulador = 0;

        for ( j = 0; j < provas; j++ )
        {
            printf("Digite a nota do aluno %d, na prova %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%f", &mat[i][j]);
            acumulador = ( acumulador + mat[i][j] );
        }

        media = ( ( float ) ( acumulador / provas ) ); //Casting
        printf("\nMédia do aluno %d: %.2f", ( i + 1 ), media);

        if ( media >= 6.0 )
        {
            printf ("\nAluno %d APROVADO!!!\n\n", ( i + 1 ) );
            aprovados ++;
        }
        else // media < 6.0
        {
            printf ("\nAluno %d REPROVADO!!!\n\n", ( i + 1 ) );
            reprovados ++;
        }
    }

    printf("\nO total de alunos aprovados foi: %d, e de reprovados foi: %d.\n\n", aprovados, reprovados);

    system ("pause");
    return (0);
}
