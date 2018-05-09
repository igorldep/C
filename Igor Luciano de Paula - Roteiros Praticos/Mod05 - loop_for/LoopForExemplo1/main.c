#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Exerc�cio N. 1:
 *Crie e compile o c�digo fonte abaixo: a) Nome para o programa: LoopForExemplo1.c
 *b) Compile e execute o c�digo fonte; c) O que o programa faz?
 *d) Qual a diferen�a b�sica do la�o for com as estruturas de repeti��o while e do/while?
 *e) Quais as vantagens de se usar o la�o for? f) Altere o programa para que o step do
 *contador seja de 2 em 2.
 */

int main (){

    int contador;

    printf ("\nImprime de 0 a 100 na tela: ");

    for(contador = 0; contador < 100; contador = contador + 2){
        printf ("\n\tContador = %d", contador);
    }

    printf ("\n\tFora do la�o. Valor do contador = %d", contador);
    printf ("\n\tFim do programa\n\n");

    system("pause");
    return(0);
}

/*O programa imprime na tela a mensagem "\nImprime de 0 a 100 na tela: ". Posteriomente, entra em um loop for,
 *que imprimir� por 100 vezes o valor de um contador. Ap�s as 100 impress�es o programa imprime na tela
 *"\n\tFora do la�o. Valor do contador = %d", contador", "\n\tFim do programa\n\n" e se encerra.
 *
 *As diferen�as e vantagens b�sicas do la�o for para as outras estruturas de repeti��o se apresenta na sua praticidade e ograniza��o
 *para realizar um loop. Somente dentro das instru��es do comando for j� � poss�vel inicializar a vari�vel com um valor qualquer,
 *colocar sua condi��o de parada e tamb�m o incremento da vari�vel a cada ciclo de execiu��o sendo assim ideal para loops
 *onde se sabe a inicializa��o e a condi��o de parada exatamente.
 */
