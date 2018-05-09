#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Prática N. 4:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *MaiorMenor. O programa deve solicitar números inteiros positivos para o usuário. Caso o
 *usuário digite -1 o programa termina e imprime o menor e o maior número digitado.
 */

int main ()
{
    int x, max, min;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &x);

    if ( x == -1 )
    {
        printf("\nFim de programa!\n\n");
        system("pause");
        return (0);
        
    }

    max = min = x;

    while ( x != -1 )
    {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &x);

        if ( x > max )
            max = x;
        else if ( x < min )
        {
            if ( x != -1 )
                min = x;
        }

    }

    printf("\nO maior valor digitado foi %d e o menor valor foi %d.\n\n", max, min);

    system("pause");
    return (0);
}
