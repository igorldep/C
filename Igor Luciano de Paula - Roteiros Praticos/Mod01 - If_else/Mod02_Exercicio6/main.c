#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exercício N. 6:
 *Faça um algoritmo que leia 3 números. Logo em seguida o programa deve imprimir o maior e
 *menor deles.
 */

int main ()
{
    float x, y, z;

    printf("\nDigite um numero: ");
    scanf("%f", &x);

    printf("Digite outro numero: ");
    scanf("%f", &y);

    printf("Digite outro numero: ");
    scanf("%f", &z);

    if ( x > y ) // y < x
    {
        if ( x > z )
        {
            printf("\nO maior numero é o %.2f\n\n", x);

            if ( z > y )
            {
                printf("\nO menor numero é o %.2f\n\n", y);
            }
            else // z < y
            {
                printf("\nO menor numero é o %.2f\n\n", z);
            }
        }
        else // x < z
        {
            printf("\nO maior numero é o %.2f\n\n", z);
            printf("\nO menor numero é o %.2f\n\n", y);
        }
    }
    else // x < y == y > x
    {
        if ( x > z )
        {
            printf("\nO maior numero é o %.2f\n\n", y);
            printf("\nO menor numero é o %.2f\n\n", z);
        }
        else // x < z
        {
            printf("\nO menor numero é o %.2f\n\n", x);

            if ( z > y )
            {
                printf("\nO maior numero é o %.2f\n\n", z);
            }
            else // z < y == y > z
            {
                printf("\nO maior numero é o %.2f\n\n", y);
            }
        }
    }

    system ("pause");
    return(0);
}
