#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Prática N. 6:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *NumerosMultiplos. O programa deve solicitar um número inteiro positivo menor que 10 e maior
 *que zero para o usuário. Logo em seguida o programa deve imprimir todos os múltiplos do
 *número dado a partir dele até 500 conforme o exemplo
 */

int main ()
{
    int x, count;

    do
    {
        printf("Digite um número inteiro maior que 0 e menor que 10: "); 
        scanf("%d", &x);
    }while( ( x < 1 ) || ( x > 10) ); //só aceita as entradas corretas
	
    for ( count = x ; count <= 500 ; count++)
    {
        if ( ( count % x ) == 0 )
        {
            printf("Número %d: Este número é multiplo!\n", count);
        }
        else
        {
            printf("Número %d: Este número não é multiplo!\n", count);
        }
    } 


    system("pause");
    return(0);

}
