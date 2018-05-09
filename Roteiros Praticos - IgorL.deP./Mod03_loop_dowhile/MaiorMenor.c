#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Exercício N. 4:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *MaiorMenor. O programa deve solicitar números inteiros positivos para o usuário. Caso o
 *usuário digite -1 o programa termina e imprime o menor e o maior número digitado.
 */

int main()
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

    do{
        printf("Digite outro número inteiro positivo: ");
        scanf("%d", &x);

        if (x > max)
            max = x;
        else if ( ( x < min ) && ( x != -1 ) )
            min = x;
    }while (x != -1); //-1 é a condição de parada

    printf("\nO maior número digitado foi %d, e o menor %d.\n\n", max, min);

    system("pause");
    return (0);
}
