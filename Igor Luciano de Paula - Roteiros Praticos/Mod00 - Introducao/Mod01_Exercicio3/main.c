#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod00_Introdu��o - Roteiro: Exerc�cio Proposto N. 3:
 *Apresente um c�digo completo escrito em linguagem C que solicite ao usu�rio seu ano de
 *nascimento. Logo em seguida o programa deve informar: A idade aproximada do usu�rio em anos;
 *A idade aproximada em dias; A idade aproximada em horas; A idade aproximada em minutos;
 *A idade aproximada em segundos;
 *Obs: Para simplificar considerar o ano com 365 dias. N�o ser� necess�rio prever a exist�ncia
 *ou n�o de ano bissexto;
 */

int main ()
{
    int nascimento, anos, dias, horas, minutos, segundos;

    printf("Em qual ano voc� nasceu: "); scanf("%d", &nascimento);

    //Opera��es para calcular as solicita��es do exerc�cio
    anos = 2016 - nascimento; dias = anos * 365; horas = dias * 24; minutos = horas * 60; segundos = minutos * 60;

    printf("\nVoc� nasceu a aproximadamente %d anos, %d dias, %d horas, %d minutos e %d segundos\n", anos, dias, horas, minutos, segundos);

    system("pause");
    return (0);
}
