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

float fatorial ( int n );
float numerador ( int n, float x );

int main (){
    int n, n1, y = 3;
    float x, fat, res, a, num;
    
    printf("\nDigite dois números, 'n'(inteiro) e 'x'(real): ");
    scanf("%d %f", &n, &x);
    
    y = (y + ( n - 1 ) * 2); //Denominador
    fat = fatorial ( y );
    
    num = ( (float) numerador ( n, x ) ); //Casting
    
    res = ( num / fat );   
    
    printf("\nO n-ésimo permo da sequência é: %.2f.\n\n", res);
}

float fatorial ( int n ){
    if (  n == 1 )
        return 1;
    else
        return ( n * fatorial ( n - 1 ) ); //recursividade 
}

float numerador (int n, float x){
    int n1 = (n * 2);
    float a = pow(x, n);
    
    return ( n1 * a);
}
