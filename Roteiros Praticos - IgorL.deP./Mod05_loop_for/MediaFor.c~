#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Prática N. 9:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *MediaFor. O programa solicita que sejam digitadas 10 notas (0 a 10) de um aluno. Logo em
 *seguida o programa deve imprimir a soma e a média entre as notas.
 */

int main ()
{
    int  contador;
    float nota, acumulador = 0, x;

    for (contador = 1; contador <= 10; contador ++)
    {
        printf("\nDigite a %dº nota: ", contador);
        scanf("%f", &nota);

        acumulador = acumulador + nota;
    }

    x = ( acumulador / 10 );

    //precisão de duas casas décimais
    printf("\nO valor total de notas é %.2f. A média dos números digitados é %.2f.\n\n", acumulador, x);

    system ("pause");
    return (0);
}
