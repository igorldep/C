#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exercício N. 1:
 *Crie e compile o código fonte abaixo:	a) Nome para o programa: Mod02_Exercicio1.c;
 *b) Faça a identação do código conforme aulas de AED; c) Compile e execute o código fonte;
 *d) Inclusa um system(“pause”) no código fonte para parar a tela. Obs: para usar a função 
 *system(“pause”) você deve incluir a biblioteca stdlib: #include <stdlib.h>
 *e) O que o programa faz?
 */

int main () 
{
    int num;

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if ( num > 10 )
    {
        printf ("\n\nO numero e maior que 10");
    }
    if ( num == 10 )
    {
        printf ("\n\nVoce acertou!\n");
        printf ("O numero e igual a 10.");
    }
    if ( num < 10 )
    {
        printf ("\n\nO numero e menor que 10");
    }

    system ("pause");
    return(0);
}

/*O programa pede um numero para o usuário e o armazena na viriável inteira "num". 
 *Posteriormente o compara com o número 10. Se o número for maior que 10, ele imprime na tela "O numero e maior que 10".
 *Mas se o número for igual a 10, ele imprime na ela "Voce acertou!" e "O numero e igual a 10.".
 *Senão(número menor que 10), o programa imprime na tela "O numero e menor que 10".
 */
