#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Exerc�cio N. 4:
 *Crie e compile o c�digo fonte abaixo: a) Nome para o programa: LoopForExemplo21.c
 *b) Compile e execute o c�digo fonte; c) O que o programa faz?; d) Altere o programa
 *para que o step do contador seja de 2 em 2.
 */

int main (){
    int num = 0, contador = 0;

    printf ("\nDigite um numero inteiro, menor que 1000: ");
    scanf ("%d",&num);
    printf ("\nImpress�o de 1000 at� o n�mero informado: %d\n", num);

    for( contador = 1000; contador >= num; contador = contador - 2){
        printf ("\n\tContador = %d, n�o chegou no n�mero informado: %d", contador, num);
    }

    printf ("\n\tFora do la�o. Valor do contador = %d\n", contador);
    printf ("\t\tFim do programa\n");

    system("pause");
    return(0);
}

/*O programa se inicia pedindo ao usu�rio um n�mero inteiro menor que 1000. Posteriomente, imprime na tela
 *"\nImpress�o de 1000 at� o n�mero informado: %d\n", num, e entra em um loop for, que imprimir� de 1000
 *at� o n�mero informado. Ap�s o contador do loop se igualar ao n�mero informado, o programa imprime
 *na tela "\n\tFora do la�o. Valor do contador = %d", contador", "\n\tFim do programa\n\n" e se encerra.
 */
