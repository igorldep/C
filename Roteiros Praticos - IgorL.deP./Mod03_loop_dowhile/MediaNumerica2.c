#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Pr�tica N. 2:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar n�meros inteiros positivos para o usu�rio. Caso o
 *usu�rio digite -1 o programa termina e imprime a m�dia de todos os n�meros digitados. Para
 *qualquer outro valor que seja o inteiro positivo, o programa guarda o valor para ser calculado a
 *m�dia e solicita o pr�ximo n�mero. Assim sucessivamente.
 */

int main()
{
    int num, cont, acm;
    cont = acm = 0;
    float res;

    while(num != -1){
        printf("\nDigite um inteiro positivo: ");
        scanf("%d", &num);

        if ( num > 0 ){     //n�o adicionar n�meros negativos na conta
            acm = acm + num;
            cont++;
        }
    }

    res = ( acm / cont );

    printf("\nA m�dia dos n�meros digitados � de: %.2f.\n\n", res);

    system("pause");
    return (0);
}
