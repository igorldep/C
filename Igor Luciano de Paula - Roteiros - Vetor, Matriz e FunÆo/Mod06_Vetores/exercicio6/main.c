#include <stdio.h>
#include <stdlib.h>


/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod06_vetores - Roteiro: Exerc�cio N. 6:
 *Fa�a um programa que solicita que sejam digitados e armazenados 10 n�meros em um vetor
 *de inteiros chamado vetorOriginal. Logo em seguida o programa deve guardar os 10 n�meros
 *de maneira invertida em outro vetor chamado vetorInvertido.
 */

int main ()
{
    int i, j, vetorOriginal[10], vetorInvertido[10];

    printf("\n\tDigite 10 n�meros!!!\n\n");

    for( i = 0; i < 10; i++ )
    {
        printf ("Digite o %d n�mero: ", ( i + 1 ) );
        scanf("%d", &vetorOriginal[i]);
    }

    for( i = 9, j = 0; ( ( i >= 0 ) && ( j < 10 ) ); i--, j++ )
    {
        vetorInvertido[j] = vetorOriginal[i];
    }

    //sa�da
    printf("\nVetor invertido: ");
    for(i = 0; i < 10; i++ )
        printf("%d ", vetorInvertido[i] );
    printf("\n\n");

    system ("pause");
    return (0);
}
