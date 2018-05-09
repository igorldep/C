#include <stdio.h>
#include <stdlib.h>

/***************************************************************************************
 ***************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod12_TAD_Struct - Roteiro: Exerc�cio N. 1:
 ** Crie e compile o c�digo fonte abaixo: a) Nome para o programa: TesteStruct;
 ** b) Compile e execute o c�digo fonte; c) Mude o programa para o usu�rio informar
 ** os valores para o c�digo e as 3 notas de Jos�. O programa dever� calcular e
 ** mostrar a m�dia. d) Mude o programa para imprimir �Parab�ns Jos�! Sua m�dia �
 ** 70,00 e voc� est� aprovado.�, para media>=60,00. E para media<60, dever� imprimir:
 ** �Jos� voc� est� de exame especial!�.
 **
 **************************************************************************************
 **************************************************************************************/

struct Aluno {
    int codigo;
    double notas[3];
    double media;
};

int main() {
    struct Aluno jose;
    int i;

    printf("Digite o c�digo: ");
    scanf("%d", &jose.codigo);

    for ( i = 0; i < 3; i++) {
        printf("Digte a %d nota do aluno %d: ", ( i + 1 ), jose.codigo);
        scanf("%lf", &jose.notas[i]);
    }

    jose.media = (jose.notas[0]+jose.notas[1]+jose.notas[2])/3;

    printf("\nMatr�cula: %d\n", jose.codigo);

    if ( jose.media >= 6 )
        printf("Parab�ns Jos�! Sua m�dia � %.2lf e voc� est� aprovado.\n\n", jose.media);
    else // media < 6
        printf("Jos� voc� est� de exame especial! Sua m�dia � %.2lf.\n\n", jose.media);

    return (0);
}
