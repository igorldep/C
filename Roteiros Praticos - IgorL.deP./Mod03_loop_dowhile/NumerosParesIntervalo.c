#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Exercício N. 3:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *NumerosParesIntervalo. O programa deve solicitar 2 números inteiros positivos para o usuário
 *sendo que o primeiro número informado deve ser menor que o primeiro. Logo em seguida o
 *programa deve informar todos os números ímpares entre os números informados.
 */

int main()
{
    int x, y;

    printf("Digite dois números inteiros, onde o segundo numero deve ser maior que o primeiro: ");
    scanf("%d %d", &x, &y);

    if ( x > y )
    {
        printf("\n\nErro: o segundo numero deve ser maior que o primeiro!!!\n\n");
        system("pause"); return(0);
    }

    if ( ( x % 2 ) != 0 ) //impar
    {
        while ( x <= y)
        {
            printf("\n%d.", x);
            x = x + 2;
        }
    }
    else //par
    {
        x++;
        while ( x <= y)
        {
            printf("\n%d.", x);
            x = x + 2;
        }
    }

    system("pause");
    return (0);
}
