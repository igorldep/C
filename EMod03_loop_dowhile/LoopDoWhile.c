#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Exercício Proposto N. 3	:
 *Crie e compile o código fonte abaixo: g) Nome para o programa: LoopDoWhile.c
 *h) Compile e execute o código fonte;i) O que o programa faz?	
 */

int main ()
{
    int num = 0, contador = 0;

    printf ("\nDigite um numero inteiro positivo: ");
    scanf ("%d",&num);
    printf ("\nImpressão de 0 até o número informado: %d\n", num);

    do{
        printf ("\n\tContador = %d, não chegou no número informado: %d", contador, num);
        printf ("\n\tIncrementar contador");
        contador++;
    }while( contador < num );

    printf ("\t\tFim do programa\n");

    system("pause");
return(0);
}

/*O programa incia imprimindo na tela "Digite um numero inteiro positivo: " e armazena este inteiro na variável num. Posteriormente imprime:
 *"Impressão de 0 até o número informado: %d", onde %d será o valor da variável num. Em seguida entra em um loop que imprime na tela
 *"Contador = %d, não chegou no número informado: %d", onde os formatadores são respectivamente a variável inteira contador e a variável num.
 *Dentro deste loop o contador é acrescido de uma unidade. Enquanto contador for menor do que num, o programa repetira o loop. Quando esta 
 *condição não for mais verdadeira, o programa sai do loop, imprime na tela "Fim do programa" e encerra o programa.
 */		
