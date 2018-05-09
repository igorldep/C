#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Exerc�cio Proposto N. 3	:
 *Crie e compile o c�digo fonte abaixo: g) Nome para o programa: LoopDoWhile.c
 *h) Compile e execute o c�digo fonte;i) O que o programa faz?
 */

int main ()
{
    int num = 0, contador = 0;

    printf ("\nDigite um numero inteiro positivo: ");
    scanf ("%d",&num);
    printf ("\nImpress�o de 0 at� o n�mero informado: %d\n", num);

    do{
        printf ("\n\tContador = %d, n�o chegou no n�mero informado: %d", contador, num);
        printf ("\n\tIncrementar contador");
        contador++;
    }while( contador < num );

    printf ("\t\tFim do programa\n");

    system("pause");
    return(0);
}

/*O programa incia imprimindo na tela "Digite um numero inteiro positivo: " e armazena este inteiro na vari�vel num. Posteriormente imprime:
 *"Impress�o de 0 at� o n�mero informado: %d", onde %d ser� o valor da vari�vel num. Em seguida entra em um loop que imprime na tela
 *"Contador = %d, n�o chegou no n�mero informado: %d", onde os formatadores s�o respectivamente a vari�vel inteira contador e a vari�vel num.
 *Dentro deste loop o contador � acrescido de uma unidade. Enquanto contador for menor do que num, o programa repetira o loop. Quando esta
 *condi��o n�o for mais verdadeira, o programa sai do loop, imprime na tela "Fim do programa" e encerra o programa.
 */
