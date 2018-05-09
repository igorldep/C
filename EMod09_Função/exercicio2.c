#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Função - Roteiro: Exercício N. 8:
 *Fazer um método que receba um número inteiro n e retorna o seu fatorial.
 */

float fatorial ( int n );

int main (){
    int n, x;
    
    printf("\nDigite um número inteiro 'n': ");
    scanf("%d", &n);
    
    x = fatorial (n);
    
    printf("\nO fatorial de %d! é: %d.\n\n", n, x);

}

float fatorial ( int n ){
    if (  n == 1 )
        return 1;
    else
        return ( n * fatorial ( n - 1 ) ); //recursividade 

}
