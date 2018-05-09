#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************************************************************************************
 ********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod08_string - Roteiro: Exerc�cio N. 2:
 ** Fa�a um programa em C que fa�a o seguinte: a) Solicite ao usu�rio que digite uma string.
 ** b) Logo em seguida o programa deve verificar se a palavra � um pal�ndromo. Se sim deve
 ** exibir uma mensagem para o usu�rio: PAL�NDROMO!!!; Obs: exemplos de pal�ndromo: RIR;
 ** RAIAR; O pal�ndromo � verificado quando a string na ordem inversa e direta s�o iguais.
 **
 *******************************************************************************************
 *******************************************************************************************/

int main (){
    char string [201], inversa[201];
    int i, j;

    printf("\n\tDigite uma string: ");
    gets(string);

    for ( i = ( strlen(string) - 1), j = 0; i >= 0; i--, j++ )
            inversa [j] = string [i];
    inversa[j] = '\0';

    printf("\n\tString inversa: %s\n", inversa);
    if ( strcmp(string, inversa) == 0) //compara��o entre as duas strings
        printf("\n\n\tPAL�NDROMO!!!\n\n\n");
    else
        printf("\n\n\tN�O � UM PAL�NDROMO!!!\n\n\n");

    system ("pause");
    return (0);
}
