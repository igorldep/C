#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Exerc�cio Proposto N. 1:
 *Crie e compile o c�digo fonte abaixo: a) Nome para o programa: TesteContadorDoWhile.c
 *a) Compile e execute o c�digo fonte; b) O que o programa faz? c) Mude o programa para
 *o contador ir at� 100, simulando 100 viagens.
 */

int main ()
{
    int contador = 0;

    printf ("\nExecutar 100 viagens\n");

    do
    {
        printf ("\nViagem Completa!!!");
        contador = contador + 1;
        printf ("\nContador = %d", contador);
    }while ( contador < 100 );

    printf ("\nFim do programa\n");

    system("pause");
    return(0);
}

/*O programa incia imprimindo na tela "Executar 5 viagens". Posteriormente entra em um loop que imprime na
 *tela "Viagem Completa!!!" e "Contador = %d", onde o %d vai sera vari�vel inteira contador. Enquanto
 *contador for menor do que 5, o programa repetira o loop. Dentro de cada ciclo do loop o contador �
 *acrescido de uma unidade. Ap�s as 5 rodadas do loop o programa imprime "Fim de programa" e encerra o programa.
 */
