#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod00_Introdu��o - Roteiro: Exerc�cio Proposto N. 4:
 *O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do
 *distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que o percentual do
 *distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo para ler o custo de
 *f�brica de um carro, calcular e escrever o custo final ao consumidor.
 */

int main ()
{
    int fab, dist, imp;

    printf("Qual o custo de fabrica do carro? ");
    scanf("%d", &fab);

    dist = ( 0.28 * fab );
    imp = ( 0.45 * fab );

    //C�lculo do custo final escrito dentro do printf = "fab + dist + imp"
    printf("\nO custo final ao consumidor � de %d\n", (fab + dist + imp));

    system("pause");
    return (0);
}
