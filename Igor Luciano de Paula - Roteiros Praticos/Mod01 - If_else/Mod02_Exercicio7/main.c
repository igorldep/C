#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exerc�cio N. 7:
 *Fa�a um algoritmo que leia um n�mero inteiro e imprima se o n�mero � par ou �mpar.
 *Dica: O operador m�dulo retorna o resto da divis�o entre 2 n�meros: %
 */

int main ()
{
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    if ( (x % 2) != 0 ) //impar
    {
        printf("Este numero e impar!!!\n");
    }
    else //par
    {
        printf("Este numero e par!!!\n");
    }

    system ("pause");
    return(0);
}
