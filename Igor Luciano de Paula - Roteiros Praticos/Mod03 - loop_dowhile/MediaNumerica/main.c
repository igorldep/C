#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Pr�tica N. 1:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar 10 n�meros inteiros positivos para o usu�rio. Logo
 *em seguida o programa deve imprimir a m�dia dos n�meros digitados.
 */

int main ()
{
    int acumulador = 0, num, contador = 1;

    printf("\n\tDigite 10 n�meros inteiros e positivos!\n\n");

    do
    {
        printf("Qual o valor do %d� n�mero: ", contador);
        scanf("%d", &num);

        acumulador  = acumulador + num;
        contador++;

    }while ( contador <= 10 );

    printf("\nA m�dia desses n�meros �: %d.\n\n", ( acumulador/10 ) );

    system ("pause");
    return (0);
}
