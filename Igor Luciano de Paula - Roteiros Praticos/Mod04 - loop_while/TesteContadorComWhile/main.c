#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Exercício Proposto N. 1:
 *Crie e compile o código fonte abaixo: g) Nome para o programa: TesteContadorComWhile.c
 *h) Compile e execute o código fonte;i) O que o programa faz? d) Desenhe o fluxograma para o programa;
 */

int main ()
{
    int contador = 0;

    printf ("\nExecutar 5 viage
            ns ");

    while (contador < 5)
    {
        printf ("\nViagem Completa!!!");
        contador = contador + 1;
        printf ("\nContador = %d", contador);
    }

    printf ("\nFim do programa\n");

    system("pause");
    return(0);
}

/*O programa incia imprimindo na tela "Executar 5 viagens" e posteriormente entra num loop while. Enquanto a variável inteira contador, inicializada
 *com 0, for menor que 5 o programa repete o bloco. Neste bloco o programa imprime na tela "Viagem Completa!!!", adiciona uma unidade ao contador e
 *depos imprime na tela "Contador = %d", onde o %d é o próprio contador. Ao sair do loop o programa imprime na tela "Fim do programa" e encerra o mesmo.
 */
