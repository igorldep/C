#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_dowhile - Roteiro: Exerc�cio Proposto N. 2:
 *Crie e compile o c�digo fonte abaixo: b) Nome para o programa: TesteAcumuladorDoWhile.c
 *d) Compile e execute o c�digo fonte; e) O que o programa faz? f) Mude o programa para
 *serem executadas 10 viagens.
 */

int main ()
{
    int contador = 0;
    double carga, acumulador;

    printf ("\nExecutar 10 viagens\n");

    do
    {
        printf ("\nInforme a carga  da viagem %d :", (contador+1) );
        // O formatador para int � %d
        // O formatador para float � %f
        // O formatador para double � %lf
        scanf("%lf", &carga);

        contador = contador + 1;
        acumulador = acumulador + carga;

    }while ( contador < 10 );

    printf ("\nFim de expediente.\n");
    printf ("\nN�mero de viagens : %d \n", contador);

    printf ("\nCarga total transportada : %6.2lf\n", acumulador);
    // O formatador para int � %d
    // O formatador para float � %f
    // O formatador para double � %lf
    // Para imprimir um double formatado � %6.2lf (seis casas inteiras e duas decimais)
    printf ("\nCarga m�dia por viagem : %6.2lf\n", (acumulador/contador) );

    system("pause");
    return (0);
}

/*O programa incia imprimindo na tela "Executar 10 viagens". Posteriormente entra em um loop que pede ao usu�rio o valor da carga
 *"Informe a carga  da viagem %d :"(onde %d ser� o n�mero da vari�vel inteira contador+1 ) e armazena o valor na vari�vel double carga.
 *Dentro deste loop o contador � acrescido de uma unidade e a vari�vel double acumulador ser� acumlador + carga. Enquanto contador for
 *menor do que 10, o programa repetira o loop. Ap�s as 10 rodadas do loop o programa imprime "Fim de expediente", "N�mero de viagens : %d"
 *(onde %d ser� o contador), "Carga total transportada : %6.2lf"(onde %lf ser� a vari�vel acumulador), "Carga m�dia por viagem : %6.2lf"
 *(onde %lf ser� o acumulador/contador) e encerra o programa.
 */
