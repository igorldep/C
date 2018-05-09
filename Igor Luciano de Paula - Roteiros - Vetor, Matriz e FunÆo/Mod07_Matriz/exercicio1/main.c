#include <stdio.h>
#include <stdlib.h>


/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Matriz - Roteiro: Exercício N. 1:
 *Faça um programa que declare uma matriz de tamanho 10 x 10. Logo em seguida o programa
 *deve em cada posição i, j armazena o valor i*j. Logo em seguida imprima o conteúdo da matriz;
 */

int main ()
{
    int i, j, mat[10][10];

    //Cálculo
    for( i = 0; i < 10; i++ ) //linha
    {
        for( j = 0; j < 10; j++ ) //coluna
        {
            mat[i][j] = (i * j);
        }
    }

    //Saída
    for ( i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ( ( mat[i][j] >= 0 ) && mat[i][j] < 10)
                printf(" "); //alinhamento
            printf("  %d  ", mat[i][j]);
        }

        printf("\n"); //pular linha quando terminar a coluna
    }

    system ("pause");
    return (0);
}
