#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Exerc�cio N. 3:
 *Crie e compile o c�digo fonte abaixo: a) Nome para o programa: LoopForExemplo12.c
 *b) Compile e execute o c�digo fonte; c) O que o programa faz?;
 *d) Qual a diferen�a b�sica do la�o for com as estruturas de repeti��o while e do/while?
 *e) Quais as vantagens de se usar o la�o for?; f) Altere o programa para que o
 *step do contador seja de 2 em 2.
 */

int main (){
    int num = 0, contador = 0;

    printf ("\nDigite um numero inteiro positivo: ");
    scanf ("%d", &num);
    printf ("\nImpress�o de 0 at� o n�mero informado: %d ", num);

    for( contador = 0; contador < num; contador = contador + 2){
        printf ("\n\tContador = %d, n�o chegou no n�mero informado: %d", contador, num);
    }

    printf ("\n\tFora do la�o. Valor do contador = %d", contador);
    printf ("\t\tFim do programa\n");

    system("pause");
    return(0);
}

/*O programa se inicia pedindo ao usu�rio um n�mero inteiro positivo. Posteriomente, imprime na tela
 *"\nImpress�o de 0 at� o n�mero informado: %d ", num, e entra em um loop for, que imprimir� de 0
 *at� o n�mero informado. Ap�s o contador do loop se igualar ao n�mero informado, o programa imprime
 *na tela "\n\tFora do la�o. Valor do contador = %d", contador", "\n\tFim do programa\n\n" e se encerra.
 *
 *As diferen�as e vantagens b�sicas do la�o for para as outras estruturas de repeti��o se apresenta na sua praticidade e ograniza��o
 *para realizar um loop. Somente dentro das instru��es do comando for j� � poss�vel inicializar a vari�vel com um valor qualquer,
 *colocar sua condi��o de parada e tamb�m o incremento da vari�vel a cada ciclo de execiu��o sendo assim ideal para loops
 *onde se sabe a inicializa��o e a condi��o de parada exatamente.
 */
