#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod00_Introdução - Roteiro: Exercício Proposto N. 3:
 *Apresente um código completo escrito em linguagem C que solicite ao usuário seu ano de 
 *nascimento. Logo em seguida o programa deve informar: A idade aproximada do usuário em anos; 
 *A idade aproximada em dias; A idade aproximada em horas; A idade aproximada em minutos; 
 *A idade aproximada em segundos; 
 *Obs: Para simplificar considerar o ano com 365 dias. Não será necessário prever a existência 
 *ou não de ano bissexto; 
 */

int main ()
{
    int nascimento, anos, dias, horas, minutos, segundos;

    printf("Em qual ano você nasceu: "); scanf("%d", &nascimento);

    //Operações para calcular as solicitações do exercício
    anos = 2016 - nascimento; dias = anos * 365; horas = dias * 24; minutos = horas * 60; segundos = minutos * 60;

    printf("\nVocê nasceu a aproximadamente %d anos, %d dias, %d horas, %d minutos e %d segundos\n", anos, dias, horas, minutos, segundos);

    system("pause");
    return (0);
}
