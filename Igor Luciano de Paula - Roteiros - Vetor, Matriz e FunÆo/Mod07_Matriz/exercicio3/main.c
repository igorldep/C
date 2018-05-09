#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Matriz - Roteiro: Exercício N. 3:
 *Um rei persa, ao cobrar a dívida de um de seus súditos mau-pagadores que dizia não ter
 *dinheiro para quitar a dívida, propôs a seguinte forma de pagamento: em um tabuleiro
 *quadriculado utilizado para um jogo da época, contendo n linhas por m colunas, o súdito deveria
 *colocar 1 grão de trigo na primeira casa, 2 grãos na segunda, 4 na terceira, e assim
 *sucessivamente, sempre dobrando o número de grãos a cada casa. Fazer um programa C
 *que descreva esse problema de forma a indicar quantos grãos de trigo serão colocados no
 *tabuleiro, no total.
 */

int main ()
{
    int m, n, tam, res = 1, i;

    printf("Digite o valor de M: "); scanf("%d", &m);
    printf("Digite o valor de N: "); scanf("%d", &n);

    tam = ( m * n );

    for (i = 0; i < tam; i++)
        res = ( res + ( i * 2 ) );

    //sa�da
	printf("\nN�mero de gr�os no tabuleiro: %d.\n\n", res);

    system ("pause");
    return (0);
}
