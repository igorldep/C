#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Pr�tica N. 2:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar n�meros inteiros positivos para o usu�rio. Caso o
 *usu�rio digite -1 o programa termina e imprime a m�dia de todos os n�meros digitados. Para
 *qualquer outro valor que seja o inteiro positivo, o programa guarda o valor para ser calculado a
 *m�dia e solicita o pr�ximo n�mero. Assim sucessivamente.
 */

int main ()
{
    int x, contador = 1, acumulador = 0;
    float media;

    while( contador <= 10 )
    {
        printf("\nDigite o %d� n�mero: ", contador);
        scanf("%d", &x);

        if ( x == -1 )
            break;
        else if ( x > 0 )
        {
            acumulador = acumulador + x;
            contador ++;
        }
    }

    media = ( acumulador / ( contador - 1 ) );

    printf("\nA m�dia dos n�meros digitados � %.2f.\n\n", media );

    system ("pause");
    return (0);
}
