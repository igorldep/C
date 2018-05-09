#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Exerc�cio N. 4:
 *Crie o pseudoc�digo, fluxograma e programa em C de um programa chamado
 *MaiorMenor. O programa deve solicitar n�meros inteiros positivos para o usu�rio. Caso o
 *usu�rio digite -1 o programa termina e imprime o menor e o maior n�mero digitado.
 */

int main()
{
    int x, max, min;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &x);

    if ( x == -1 )
    {
        printf("\nFim de programa!\n\n");
        system("pause");
        return (0);
        
    }

    max = min = x;

    do{
        printf("Digite outro n�mero inteiro positivo: ");
        scanf("%d", &x);

        if (x > max)
            max = x;
        else if ( ( x < min ) && ( x != -1 ) )
            min = x;
    }while (x != -1); //-1 � a condi��o de parada

    printf("\nO maior n�mero digitado foi %d, e o menor %d.\n\n", max, min);

    system("pause");
    return (0);
}
