#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Função - Roteiro: Exercício N. 9:
 *Fazer um método que receba um número inteiro n e um número real x e retorne o n-ésimo termo da
 *sequência abaixo.
 */

double fatorial ( int n );
double numerador ( int n, double x );

int main (){
    int n, n1, y = 3;
    double x, fat, res, a, num;

    printf("\nDigite dois números, 'n'(inteiro) e 'x'(real): ");
    scanf("%d %lf", &n, &x);

    y = (y + ( n - 1 ) * 2); //Denominador
    fat = fatorial ( y );

    num = ( (double) numerador ( n, x ) ); //Casting

    res = ( num / fat );

    printf("\nO n-ésimo permo da sequência é: %.3lf.\n\n", res);
}

double fatorial ( int n ){
    if (  n == 1 )
        return 1;
    else
        return ( n * fatorial ( n - 1 ) ); //recursividade
}

double numerador (int n, double x){
    int n1 = (n * 2);
    double a = pow(x, n);

    return ( n1 * a);
}
