#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exerc�cio N. 1:
 *Crie e compile o c�digo fonte abaixo:	a) Nome para o programa: Mod02_Exercicio1.c;
 *b) Fa�a a identa��o do c�digo conforme aulas de AED; c) Compile e execute o c�digo fonte;
 *d) Inclusa um system(�pause�) no c�digo fonte para parar a tela. Obs: para usar a fun��o
 *system(�pause�) voc� deve incluir a biblioteca stdlib: #include <stdlib.h>
 *e) O que o programa faz?
 */

int main ()
{
    int num;

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if ( num > 10 )
    {
        printf ("\n\nO numero e maior que 10.\n");
    }
    if ( num == 10 )
    {
        printf ("\n\nVoce acertou!\n");
        printf ("O numero e igual a 10.\n");
    }
    if ( num < 10 )
    {
        printf ("\n\nO numero e menor que 10.\n");
    }

    system ("pause");
    return(0);
}

/*O programa pede um numero para o usu�rio e o armazena na viri�vel inteira "num".
 *Posteriormente o compara com o n�mero 10. Se o n�mero for maior que 10, ele imprime na tela "O numero e maior que 10".
 *Mas se o n�mero for igual a 10, ele imprime na ela "Voce acertou!" e "O numero e igual a 10.".
 *Sen�o(n�mero menor que 10), o programa imprime na tela "O numero e menor que 10".
 */
