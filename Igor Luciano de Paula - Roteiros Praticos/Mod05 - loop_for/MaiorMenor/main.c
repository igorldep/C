#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Pr�tica N. 7:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *MaiorMenor que solicita a digita��o de 10 n�meros pelo usu�rio. Logo em seguida o programa
 *deve imprimir o maior e menor n�mero digitado.
 */

int main ()
{
    int contador;
    float x, max, min;

    printf("\tDigite 10 n�meros!\n\nDigite o 1 n�mero: ");
    scanf("%f", &x);

    if ( x == -1 )
    {
        printf("\nFim de programa!\n\n");
        system("pause");
        return (0);

    }

    max = min = x;

    for( contador = 2; contador <= 10; contador++ )
    {
        printf("Digite o %d n�mero: ", contador);
        scanf("%f", &x);

        if ( x > max )
            max = x;
        else if ( x < min )
        {
            if ( x != -1 )
                min = x;
        }

    }

    printf("\nO maior valor digitado foi %.2f e o menor valor foi %.2f.\n\n", max, min);

    system("pause");
    return (0);
}
