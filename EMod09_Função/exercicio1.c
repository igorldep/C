#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Função - Roteiro: Exercício N. 23:
 *Fazer um método que receba um número inteiro n e retorne o maior elemento da sequência de Fibonacci
 *que seja menor que n.
 */



int main ()
{
    int n, x;
    
    printf("\nDigte um número inteiro 'n': ");
    scanf("%d", &n);
    
    x = fibonacci ( n ); 
    
    printf("\n\nO maior elemento da sequência Fibonacci que seja menor que 'n' é : %d\n\n", x);

    system ("pause");
    return (0);
}

int fibonacci ( int n )
{
    int x, y, z;
    x = y = z = 1;
    
    printf("\n%d", y);
    
    do
    {
        printf("\n%d", x);
        x = ( y + z );
        z = y;
        y = x;

    }while( x < n );
    
    return ( z );

}
