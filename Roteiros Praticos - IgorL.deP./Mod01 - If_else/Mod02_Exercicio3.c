#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exercício N. 3:
 *Faça um algoritmo que leia um valor e escreve se o mesmo é positivo, negativo ou zero.
 */

int main ()
{
    float x;

    printf ("Digite um numero: ");
    scanf ("%f", &x);

    if ( x > 0 )
    {
        printf ("\nEste numero e positivo.\n\n");
    }
    else if ( x < 0 )
    {
        printf ("\nEste numero e negativo\n\n");
    }
    else // x = 0
    {
        printf ("\nEste numero e o zero.\n\n");
    }

    system ("pause");
    return(0);
}
