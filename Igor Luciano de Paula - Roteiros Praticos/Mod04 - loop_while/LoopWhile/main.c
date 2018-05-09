#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Exerc�cio Proposto N. 3:
 *Crie e compile o c�digo fonte abaixo: d) Nome para o programa: TesteContadorComWhile.c
 *e) Compile e execute o c�digo fonte; f) O que o programa faz? g) Desenhe o fluxograma para o programa;
 */

int main ()
{
    int num = 0, contador = 0;

    printf ("\nDigite um numero inteiro positivo: ");
    scanf ("%d",&num);

    printf ("\nImpress�o de 0 at� o n�mero informado: %d ", num);

    while( contador <= num )
    {
        printf ("\n\tContador = %d, n�o chegou informado: %d", contador, num);
        printf ("\n\tIncrementar contador");
        printf ("\n\tValor atual: %d", contador);
        contador++;
        printf ("\n\tNovo valor do contador: %d", contador);
    }

    printf ("\t\tFim do programa\n");

    system("pause");
    return(0);
}

/*O programa incia pedindo ao usu�rio um n�mero inteiro positivo. Ao informar o n�mero, o programa o armazena na vari�vel inteira num.
 *Posteriomente o programa imprime na tela "Impress�o de 0 at� o n�mero informado: %d ", onde %d � o n�mero informado pelo usu�rio(num).
 *Ap�s isso o programa entra em um loop while, e enquanto o a vari�vel inteira contador for menor ou igual ao n�mero digitado pelo usu�rio
 *o programa ir� repetir o bloco. Dentro do Loop o programa imprime na tela: "Contador = %d, n�o chegou informado: %d", contador, num.
 *"Incrementar contador" e "Valor atual: %d", contador. Em seguida o programa acrescenta o contador em uma unidade e imprime na tela
 *"Novo valor do contador: %d", contador. Ao sair do loop o programa imprime na tela "Fim do programa\n" e si encerra.
 */

