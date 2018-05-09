#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exercício N. 5:
 *Faça um algoritmo que leia 2 números. Logo em seguida o programa deve imprimir o maior e
 *menor deles.
 */

int main ()
{
    float x, y;

    printf("Digite um numero: "); scanf("%f", &x);
    printf("\nDigite outro numero: "); scanf("%f", &y);

    if ( x > y )
    {
        printf("\n%f é maior que %f.\n\n", x, y);
    }
    else if ( x == y )
    {
        printf("\nSão numeros iguais.\n\n");
    }
    else
    {
        printf("\n%.2f é maior que %.2f.\n\n", y, x);
    }

    system("pause");
    return 0;
}
