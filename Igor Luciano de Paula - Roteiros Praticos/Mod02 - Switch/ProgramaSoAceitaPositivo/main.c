#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_switch - Roteiro: Exerc�cio N. 2:
 *Crie e compile o c�digo fonte abaixo
 *a) Nome para o programa: ProgramaSoAceitaPositivo.c; b) Compile e execute o c�digo fonte;
 *c) O que o programa faz?
 */

int main ()
{
    float num = 0;

    do
    {
        printf ("\nDigite um n�mero inteiro e positivo: ");
        scanf("%f", &num);
    }
    while ( ( num < 0 ) || ( num == 0 ) );

    printf ("\nO n�mero %f � inteiro e positivo!\n", num);
    printf ("\nFim do programa\n\n");

    system("pause");
    return(0);
}

/*O programa recebe uma entrada e o armazena na vari�vel inteira "num". Enquanto o numero for menor que zero
 *o programa repete a mensagem "Digite um n�mero inteiro e positivo:", dando outra oportunidade para o usu�rio digitar
 *um n�mero maior que 0. Quando o n�mero dado pelo usu�rio for maior que zero o programa sai do loop, imprime na tela o n�mero
 *e encerra o programa.
 */
