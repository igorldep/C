#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod00_Introdução - Roteiro: Exercício Proposto N. 1:
 *Apresente um código completo escrito em linguagem C que permita ao usuário informar dois 
 *valores numéricos reais e mostrar na tela o cálculo da multiplicação, soma e divisão entre os 
 *valores. 
 */

int main ()
{
    //Entradas
    double x, y;

    //Captura as entradas
    printf("Digite o primeiro numero: ");
    scanf("%lf", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%lf", &y);

    //Imprime na tela o resultado das operações
    printf("\nA multiplicação entre %lf e %lf é: %lf\n", x, y, x * y);
    printf("\nA soma entre %lf e %lf é: %lf\n", x, y, x + y);
    printf("\nA divisão entre %lf e %lf é: %lf\n", x, y, x / y);

    system("pause");
return (0);
}
