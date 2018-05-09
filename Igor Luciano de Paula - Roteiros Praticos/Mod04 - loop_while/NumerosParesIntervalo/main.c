#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Pr�tica N. 3:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *NumerosParesIntervalo. O programa deve solicitar 2 n�meros inteiros positivos para o usu�rio
 *sendo que o primeiro n�mero informado deve ser menor que o primeiro. Logo em seguida o
 *programa deve informar todos os n�meros �mpares entre os n�meros informados.
 */

int main ()
{
    int x, y;

    printf ("Digite dois n�meros inteiros positivos(o segundo n�mero deve ser maior que o primeiro): ");
    scanf("%d %d", &x, &y);

    if ( x > y )
    {
        printf("\n\tErro! Voc� digitou o primeiro n�mero maior que o segundo!\n\n");
        system("pause");
        return (0);
    }

    if( ( x % 2 ) == 0 )
    {
        printf("\n%d\n", x);

        while ( x < y )
        {
            printf("%d\n", ( x = x + 2 ) );
        }
    }
    else
    {
        x++; printf("\n%d\n", x); //acresenta o 'x' em uma unidade antes de continuar o programa

        while ( x < y )
        {
            printf("%d\n", ( x = x + 2 ) );
        }
    }

    system("pause");
    return (0);
}
