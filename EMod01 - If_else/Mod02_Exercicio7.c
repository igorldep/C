#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exercício N. 7:
 *Faça um algoritmo que leia um número inteiro e imprima se o número é par ou ímpar.
 *Dica: O operador módulo retorna o resto da divisão entre 2 números: %
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

