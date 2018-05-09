#include <stdio.h>
#include <stdlib.h>


/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod06_vetores - Roteiro: Exercício N. 5:
 *Uma turma tem 40 alunos. Faça um programa para ler a idade de todos os alunos e logo em seguida imprimir:
 *a) Total de alunos com idade menor que 16 anos; b) Total de alunos entre 16 e 18 anos;
 *c) Total de alunos com idade maior que 18 anos; d) Média das idades; e) Idade do aluno mais novo;
 *f) Idade do aluno mais velho;
 */

int main ()
{
    int i, idade[40], cont16 = 0, cont16_18 = 0, cont18 = 0, total = 0, max, min;
    float media;

    for( i = 0; i < 40; i++ )
    {
        printf ("Digite a idade do aluno %d: ", ( i + 1 ) );
        scanf("%d", &idade[i]);
    }

    max = min = idade [0];

    for( i = 0; i < 40; i++ )
    {
        if ( idade [i] < 16 )
            cont16 ++;
        if ( ( idade [i] >= 16 ) && ( idade [i] <= 18 ) )
            cont16_18 ++;
        if ( idade [i] > 18 )
            cont18 ++;

        if ( idade [i] < min )
            min = idade [i];
        if ( idade [i] > max )
            max = idade [i];

        total = ( total + idade [i] ) ;
    }

    //cálculo da média
    media = ( (float) total / 40 ); //Casting (float)

    //saída
    printf("\n\tAlunos com idade menor que 16 anos: %d.\n\tAlunos com idade entre 16 e 18 anos: %d.\n\tAlunos com idade maior que 18 anos: %d.\n\n\tMédia das idades: %.2f\n\n\tIdade do aluno mais novo: %d.\n\tIdade do aluno mais velho: %d.\n\n", cont16, cont16_18, cont18, media, min, max);

    system ("pause");
    return (0);
}
