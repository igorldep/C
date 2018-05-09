#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_switch - Roteiro: Exerc�cio N. 1:
 *Crie e compile o c�digo fonte abaixo
 *a) Nome para o programa: ComandoSelecaoSwitch.c; b) Compile e execute o c�digo fonte; c) O que o programa faz?
 *d) Altere o programa para ter um �case� para os n�meros 3, 4 e 5.
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
             printf("\nN�mero digitado: ZERO!\n");
             break;
        }
        case 1:
        {
             printf("\nN�mero digitado: UM!\n");
             break;
        }
        case 2:
        {
             printf("\nN�mero digitado: DOIS!\n");
             break;
        }
        case 3:
        {
             printf("\nN�mero digitado: TR�S!\n");
             break;
        }
        case 4:
        {
             printf("\nN�mero digitado: QUATRO!\n");
             break;
        }
        case 5:
        {
             printf("\nN�mero digitado: CINCO!\n");
             break;
        }
        default:
        {
             printf("\nN�mero digitado: OUTROS VALORES!\n");
             break;
        }
    }

    printf ("\nFim do programa\n");

    system("pause");
    return(0);
}

/*O programa recebe uma entrada(inteira) do usu�rio e caso o mesmo seja "zero" ele imprime na tela "N�mero digitado: ZERO!",
 *caso o n�mero seja "um" ele imprime na tela "N�mero digitado: UM!", caso o n�mero seja "dois" ele imprime na tela
 *"N�mero digitado: DOIS!", mas caso n�o seja nenhum desses valores, o programa imprime "N�mero digitado: OUTROS VALORES!".
 */
