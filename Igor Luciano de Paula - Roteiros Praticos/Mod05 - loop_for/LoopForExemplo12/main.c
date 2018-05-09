#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Exercício N. 3:
 *Crie e compile o código fonte abaixo: a) Nome para o programa: LoopForExemplo12.c
 *b) Compile e execute o código fonte; c) O que o programa faz?;
 *d) Qual a diferença básica do laço for com as estruturas de repetição while e do/while?
 *e) Quais as vantagens de se usar o laço for?; f) Altere o programa para que o
 *step do contador seja de 2 em 2.
 */

int main (){
    int num = 0, contador = 0;

    printf ("\nDigite um numero inteiro positivo: ");
    scanf ("%d", &num);
    printf ("\nImpressão de 0 até o número informado: %d ", num);

    for( contador = 0; contador < num; contador = contador + 2){
        printf ("\n\tContador = %d, não chegou no número informado: %d", contador, num);
    }

    printf ("\n\tFora do laço. Valor do contador = %d", contador);
    printf ("\t\tFim do programa\n");

    system("pause");
    return(0);
}

/*O programa se inicia pedindo ao usuário um número inteiro positivo. Posteriomente, imprime na tela
 *"\nImpressão de 0 até o número informado: %d ", num, e entra em um loop for, que imprimirá de 0
 *até o número informado. Após o contador do loop se igualar ao número informado, o programa imprime
 *na tela "\n\tFora do laço. Valor do contador = %d", contador", "\n\tFim do programa\n\n" e se encerra.
 *
 *As diferenças e vantagens básicas do laço for para as outras estruturas de repetição se apresenta na sua praticidade e ogranização
 *para realizar um loop. Somente dentro das instruções do comando for já é possível inicializar a variável com um valor qualquer,
 *colocar sua condição de parada e também o incremento da variável a cada ciclo de execiução sendo assim ideal para loops
 *onde se sabe a inicialização e a condição de parada exatamente.
 */
