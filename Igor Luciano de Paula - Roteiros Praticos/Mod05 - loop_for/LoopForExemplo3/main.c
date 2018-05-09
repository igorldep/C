#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod05_loop_for - Roteiro: Exerc�cio N. 5:
 *Crie e compile o c�digo fonte abaixo: a) Nome para o programa: LoopForExemplo3.c
 *b) Compile e execute o c�digo fonte; c) O que o programa faz?; d) Altere o programa
 *para que o step do contador x seja de 2 e y de 3.
 */

int main (){
    int x = 0, y = 0;

    for(x = 0, y = 1000; ( x != y); x = x + 2, y = y - 3){
        printf ("\n\tX = %d Y=%d", x, y);
    }

    printf ("\n\tFora do la�o X = %d Y=%d", x, y);
    printf ("\t\tFim do programa\n");

    system("pause");
    return(0);
}

/*O programa se inicia entrando em um loop for, que imprimir� o valor de duas vari�veis inteiras, x e y.
 *'x' � inicializada com 0, e y � inicializada com 1000. Enquanto o valor de x for diferente do de y, o
 *programa imprimir� seus valores. Ap�s cada ciclo, o x � acrescido em uma unidade, e o y � decrescido de
 *uma unidade. Ap�s o x e o y se igualarem o programa imprime na tela ""\n\tFora do la�o X = %d Y=%d", x, y",
 *"\n\tFim do programa\n" e se encerra.
 */
