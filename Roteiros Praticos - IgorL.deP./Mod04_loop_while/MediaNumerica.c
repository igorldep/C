#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Prática N. 1:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar 10 números inteiros positivos para o usuário. Logo
 *em seguida o programa deve imprimir a média dos números digitados.
 */

int main ()
{
    unsigned int x, contador = 1, acumulador = 0;

    while( contador <= 10 )
    {
        printf("\nDigite o %dº número: ", contador);
        scanf("%d", &x);

        acumulador = acumulador + x;
        contador ++;
    }

    printf("\nA média dos números digitados é %d.\n\n", ( acumulador / 10 ) );

    system ("pause");
    return (0);
}
