#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exerc�cio N. 4:
 *Apresente Uma disciplina tem 2 provas durante o semestre valendo 10 pontos cada. Fa�a um
 *programa para solicitar ao usu�rio as notas na disciplina. O programa deve ent�o calcular a
 *m�dia e imprimir APROVADO ou REPROVADO conforme a situa��o do aluno.
 *Obs: M�dia para aprova��o: 6.0
 */

int main ()
{
    float x, y, z;
    //x: primeira prova; y: segunda prova; z: m�dia das provas

    printf("Digite a nota da primeira prova: "); scanf("%f", &x);
    printf("Digite a nota da segunda prova: "); scanf("%f", &y);

    z = ( ( x + y ) / 2 );

    if ( z >= 6.0 )
    {
        printf("\nAPROVADO!!!\n\n");
    }
    else
    {
        printf("\nREPROVADO!!!\n\n");
    }

    system("pause");
    return 0;
}
