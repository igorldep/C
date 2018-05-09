#include <stdio.h>
#include <stdlib.h>

/***************************************************************************************
 ***************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 ** 
 ** Mod12_TAD_Struct - Roteiro: Exercício N. 1:
 ** Crie e compile o código fonte abaixo: a) Nome para o programa: TesteStruct;
 ** b) Compile e execute o código fonte; c) Mude o programa para o usuário informar
 ** os valores para o código e as 3 notas de José. O programa deverá calcular e 
 ** mostrar a média. d) Mude o programa para imprimir “Parabéns José! Sua média é
 ** 70,00 e você está aprovado.”, para media>=60,00. E para media<60, deverá imprimir:
 ** “José você está de exame especial!”.
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

    printf("Digite o código: ");
    scanf("%d", &jose.codigo);

    for ( i = 0; i < 3; i++) {
        printf("Digte a %d nota do aluno %d: ", ( i + 1 ), jose.codigo);
        scanf("%lf", &jose.notas[i]);
    }

    jose.media = (jose.notas[0]+jose.notas[1]+jose.notas[2])/3;

    printf("\nMatrícula: %d\n", jose.codigo);
    
    if ( jose.media >= 6 )
        printf("Parabéns José! Sua média é %.2lf e você está aprovado.\n\n", jose.media);
    else // media < 6
        printf("José você está de exame especial! Sua média é %.2lf.\n\n", jose.media);

    return (0);
}
