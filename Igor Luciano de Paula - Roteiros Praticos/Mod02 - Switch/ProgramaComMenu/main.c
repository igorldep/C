#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_switch - Roteiro: Exercício N. 3:
 *Crie e compile o código fonte abaixo
 *a) Nome para o programa: ProgramaComMenu.c; b) Compile e execute o código fonte; c) O que o programa faz?
 *d) Altere o programa para solicitar os parâmetros de acordo com o tipo de figura para se calcular o perímetro.
 *Obs: 1) Perímetro do retângulo = 2 * (base + altura); 2) Perímetro do triângulo = lado1 + lado2 + lado3;
 *3) Perímetro do círculo = 2*π*R;
 */

int main ()
{
    int num = 0, opcao = 0;
    float raio, p, l1, l2, l3;

    do
    {
        printf ("\n-=- Menu de opções -=- ");
        printf ("\n-=- Perímetro do círculo..............[1]");
        printf ("\n-=- Perímetro do retângulo...........[2]");
        printf ("\n-=- Perímetro do triângulo............[3]");
        printf ("\n-=- Sair..............................[4]");
        printf ("\n\n\n-=- Digite sua opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
            {
                printf("\nDigite o valor do raio: "); scanf("%f", &raio);
                //M_PI é a constante pi, inclusa na biblioteca math.h
                p = 2 * M_PI * raio;
                printf("O perímetro é: %f\n", p);

                system("pause");
                break;
            }
            case 2:
            {
                printf("\nDigite o valor da largura: "); scanf("%f", &l1);
                printf("\nDigite o valor da altura: "); scanf("%f", &l2);
                p = ( l1 + l2 ) * 2;
                printf("O perímetro é: %f\n", p);

                system("pause");
                break;
            }
            case 3:
            {
                printf("\nDigite o valor do primeiro lado: "); scanf("%f", &l1);
                printf("\nDigite o valor do segundo lado: "); scanf("%f", &l2);
                printf("\nDigite o valor do terceiro lado: "); scanf("%f", &l3);
                p = l1 + l2 + l3;
                printf("O perímetro é: %f\n", p);

                system("pause");
                break;
            }
            case 4:
            {
                printf("\n\nSair!");
                break;
            }
            default:
            {
                printf("\nNúmero digitado: TENTE OUTROS VALORES!\n");
                break;
            }
        }
    }while(opcao!=4);

    printf ("\nFim do programa\n\n");

    system("pause");
    return(0);
}

/*O programa imprime na tela um menu de opções para o usuário e salva a opção escolhida pelo usuário numa variável.
 *caso o usuário tenha escolhido a opção "1" o programa entra no caso 1, que pede ao usuário um raio, calcula e mostra na tela o
 *perimetro da circunferência. Caso o usuário tenha escolhido a opção "2" o programa pede ao usuário a largura e altura
 *do retângulo, calcula o perímetro do mesmo e imprime na tela o resultado. Caso o usuário escolha a opção "3" o programa
 *pede o valor dos três lados e depois calcula e imprime o valor do perímetro. Se o usuário escolher o caso "4"
 *o programa sai do loop do-while, imprime na tela a sua saida e encerra o programa. Mas caso o usuário não digite nenhum destes
 *números, é impresso na tela "Número digitado: TENTE OUTROS VALORES!" e volta ao início do Loop, no menu principal.
 *Mesmo que usuário digite algum valor possível, caso o mesmo aperte enter o programa volta no menu principal.
 */
