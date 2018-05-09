#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod00_Introdu��o - Roteiro: Exerc�cio Proposto N. 1:
 *Apresente um c�digo completo escrito em linguagem C que permita ao usu�rio informar dois
 *valores num�ricos reais e mostrar na tela o c�lculo da multiplica��o, soma e divis�o entre os
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

    //Imprime na tela o resultado das opera��es
    printf("\nA multiplica��o entre %.2lf e %.2lf �: %.2lf\n", x, y, ( x * y ) );
    printf("\nA soma entre %.2lf e %.2lf �: %.2lf\n", x, y, ( x + y ) );
    printf("\nA divis�o entre %.2lf e %.2lf �: %.2lf\n", x, y, ( x / y ) );

    system("pause");
    return (0);
}
