#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Pr�tica N. 1:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar 10 n�meros inteiros positivos para o usu�rio. Logo
 *em seguida o programa deve imprimir a m�dia dos n�meros digitados.
 */

int main ()
{
    unsigned int x, contador = 1, acumulador = 0;

    while( contador <= 10 )
    {
        printf("\nDigite o %d� n�mero: ", contador);
        scanf("%d", &x);

        acumulador = acumulador + x;
        contador ++;
    }

    printf("\nA m�dia dos n�meros digitados � %d.\n\n", ( acumulador / 10 ) );

    system ("pause");
    return (0);
}
