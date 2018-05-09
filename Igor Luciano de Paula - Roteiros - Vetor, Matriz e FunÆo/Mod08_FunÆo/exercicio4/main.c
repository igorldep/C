#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Função - Roteiro: Exercício N. 14:
 *Fazer um método que calcula a raiz cúbica de um número e retorna esse valor.
 */

float raizcubica ( int n );

int main (){
    float x, res;

    printf("\nDigite um números: ");
    scanf("%f", &x);

    res = raizcubica ( x );

    printf("\nA raiz cúbica de %.2f é: %.2f.\n\n", x, res);

}

float raizcubica ( int n ){
    float r = ( (float)  1 / 3 ); //Type Casting
    return (pow (n, r));

}
