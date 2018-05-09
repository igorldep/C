#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Prática N. 2:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar números inteiros positivos para o usuário. Caso o
 *usuário digite -1 o programa termina e imprime a média de todos os números digitados. Para
 *qualquer outro valor que seja o inteiro positivo, o programa guarda o valor para ser calculado a
 *média e solicita o próximo número. Assim sucessivamente.
 */

int main ()
{
    int x, contador = 1, acumulador = 0;
    float media;

    while( contador <= 10 )
    {
        printf("\nDigite o %dº número: ", contador);
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

    printf("\nA média dos números digitados é %.2f.\n\n", media );

    system ("pause");
    return (0);
}
