#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_switch - Roteiro: Exercício N. 1:
 *Crie e compile o código fonte abaixo
 *a) Nome para o programa: ComandoSelecaoSwitch.c; b) Compile e execute o código fonte; c) O que o programa faz?
 *d) Altere o programa para ter um “case” para os números 3, 4 e 5.
 */

int main ()
{
    int num = 0;

    printf ("\nDigite um numero inteiro positivo: ");
    scanf ("%d",&num);

    switch( num )
    {
        case 0:
        {
             printf("\nNúmero digitado: ZERO!\n");
             break;
        }
        case 1:
        {
             printf("\nNúmero digitado: UM!\n");
             break;
        }
        case 2:
        {
             printf("\nNúmero digitado: DOIS!\n");
             break;
        }
        case 3:
        {
             printf("\nNúmero digitado: TRÊS!\n");
             break;
        }
        case 4:
        {
             printf("\nNúmero digitado: QUATRO!\n");
             break;
        }
        case 5:
        {
             printf("\nNúmero digitado: CINCO!\n");
             break;
        }
        default:
        {
             printf("\nNúmero digitado: OUTROS VALORES!\n");
             break;
        }
    }

    printf ("\nFim do programa\n");

    system("pause");
    return(0);
}

/*O programa recebe uma entrada(inteira) do usuário e caso o mesmo seja "zero" ele imprime na tela "Número digitado: ZERO!",
 *caso o número seja "um" ele imprime na tela "Número digitado: UM!", caso o número seja "dois" ele imprime na tela
 *"Número digitado: DOIS!", mas caso não seja nenhum desses valores, o programa imprime "Número digitado: OUTROS VALORES!".
 */

