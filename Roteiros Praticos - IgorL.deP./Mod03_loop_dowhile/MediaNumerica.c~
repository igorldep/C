#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Prática N. 1:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar 10 números inteiros positivos para o usuário. Logo
 *em seguida o programa deve imprimir a média dos números digitados.
 */

int main ()
{
    int acumulador, num, contador = 1;

    printf("\n\tDigite 10 números inteiros e positivos!\n\n");

    do
    {
        printf("Qual o valor do %dº número: ", contador);
        scanf("%d", &num);

        acumulador  = acumulador + num;
        contador++;
	
    }while ( contador <= 10 );

    printf("\nA média desses números é: %d.\n\n", ( acumulador/10 ) );

    system ("pause");
    return (0);
}
