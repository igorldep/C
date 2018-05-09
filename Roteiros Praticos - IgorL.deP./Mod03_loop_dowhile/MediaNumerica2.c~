#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Prática N. 2:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *MediaNumerica. O programa deve solicitar números inteiros positivos para o usuário. Caso o
 *usuário digite -1 o programa termina e imprime a média de todos os números digitados. Para
 *qualquer outro valor que seja o inteiro positivo, o programa guarda o valor para ser calculado a
 *média e solicita o próximo número. Assim sucessivamente.
 */

int main()
{
    int num, cont, acm;
    cont = acm = 0;
    float res;

    while(num != -1){
        printf("\nDigite um inteiro positivo: ");
        scanf("%d", &num);

        if ( num > 0 ){     //não adicionar números negativos na conta
            acm = acm + num;
            cont++;
        }
    }

    res = ( acm / cont );

    printf("\nA média dos números digitados é de: %.2f.\n\n", res);

    system("pause");
    return (0);
}
