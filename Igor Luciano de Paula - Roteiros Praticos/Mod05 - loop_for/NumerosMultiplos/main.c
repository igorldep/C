#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Pr�tica N. 6:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *NumerosMultiplos. O programa deve solicitar um n�mero inteiro positivo menor que 10 e maior
 *que zero para o usu�rio. Logo em seguida o programa deve imprimir todos os m�ltiplos do
 *n�mero dado a partir dele at� 500 conforme o exemplo
 */

int main ()
{
    int x, count;

    do
    {
        printf("Digite um n�mero inteiro maior que 0 e menor que 10: ");
        scanf("%d", &x);
    }while( ( x < 1 ) || ( x > 10) ); //s� aceita as entradas corretas

    for ( count = x ; count <= 500 ; count++)
    {
        if ( ( count % x ) == 0 )
        {
            printf("N�mero %d: Este n�mero � multiplo!\n", count);
        }
        else
        {
            printf("N�mero %d: Este n�mero n�o � multiplo!\n", count);
        }
    }


    system("pause");
    return(0);

}
