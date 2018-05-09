#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Exercício N. 1:
 *Crie e compile o código fonte abaixo: a) Nome para o programa: LoopForExemplo1.c
 *b) Compile e execute o código fonte; c) O que o programa faz?
 *d) Qual a diferença básica do laço for com as estruturas de repetição while e do/while?
 *e) Quais as vantagens de se usar o laço for? f) Altere o programa para que o step do
 *contador seja de 2 em 2.
 */

int main (){

    int contador;

    printf ("\nImprime de 0 a 100 na tela: ");

    for(contador = 0; contador < 100; contador = contador + 2){
        printf ("\n\tContador = %d", contador);
    }

    printf ("\n\tFora do laço. Valor do contador = %d", contador);
    printf ("\n\tFim do programa\n\n");

    system("pause");
    return(0);
}

/*O programa imprime na tela a mensagem "\nImprime de 0 a 100 na tela: ". Posteriomente, entra em um loop for,
 *que imprimirá por 100 vezes o valor de um contador. Após as 100 impressões o programa imprime na tela
 *"\n\tFora do laço. Valor do contador = %d", contador", "\n\tFim do programa\n\n" e se encerra.
 *
 *As diferenças e vantagens básicas do laço for para as outras estruturas de repetição se apresenta na sua praticidade e ogranização
 *para realizar um loop. Somente dentro das instruções do comando for já é possível inicializar a variável com um valor qualquer,
 *colocar sua condição de parada e também o incremento da variável a cada ciclo de execiução sendo assim ideal para loops
 *onde se sabe a inicialização e a condição de parada exatamente.
 */
