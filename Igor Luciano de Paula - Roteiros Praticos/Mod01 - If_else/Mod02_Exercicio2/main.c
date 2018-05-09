#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exerc�cio N. 2:
 *Crie e compile o c�digo fonte abaixo:	a) Nome para o programa: Mod02_Exercicio2.c;
 *b) Fa�a a identa��o do c�digo conforme aulas de AED; c) Compile e execute o c�digo fonte;
 *d) Inclusa um system(�pause�) no c�digo fonte para parar a tela. Obs: para usar a fun��o
 *system(�pause�) voc� deve incluir a biblioteca stdlib: #include <stdlib.h>
 *e) O que o programa faz?
 */

int main ()
{
    int idade;

    printf ("Digite sua idade: ");
    scanf ("%d",&idade);

    if ( ( idade>=16 ) && ( idade<18 ) )
    {
        printf ("\n\nVoc� pode votar se quiser!!!\n\n\n");
    }
    else if ( ( idade>=18 ) && ( idade<60 ) )
    {
        printf ("\n\nVoc� deve votar. Sen�o deve justificar sua aus�ncia nas elei��es!\n\n\n");
    }
    else
    {
        printf ("\n\nVoc� vota se quiser!\n\n\n");
    }

    system ("pause");
    return(0);
}

/*O programa pede um numero para o usu�rio e o armazena na viri�vel inteira "idade".
 *Posteriormente o compara com algumas express�es. Se o n�mero for maior ou igual que 16 e, ao mesmo tempo, menor que 18,
 *ele imprime na tela "Voc� pode votar se quiser!!!". Mas se o n�mero for maior ou igual a 18 e, ao mesmo tempo, menor que 60,
 *o programa imprime na ela "Voc� deve votar. Sen�o deve justificar sua aus�ncia nas elei��es!".
 *Sen�o(n�mero menor que 16 ou maior que 60), o programa imprime na tela "Voc� vota se quiser!".
 */
