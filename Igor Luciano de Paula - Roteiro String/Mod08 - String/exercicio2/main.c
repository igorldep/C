#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************************************************************************************
 ********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod08_string - Roteiro: Exercício N. 2:
 ** Faça um programa em C que faça o seguinte: a) Solicite ao usuário que digite uma string.
 ** b) Logo em seguida o programa deve verificar se a palavra é um palíndromo. Se sim deve
 ** exibir uma mensagem para o usuário: PALÍNDROMO!!!; Obs: exemplos de palíndromo: RIR;
 ** RAIAR; O palíndromo é verificado quando a string na ordem inversa e direta são iguais.
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
    if ( strcmp(string, inversa) == 0) //comparação entre as duas strings
        printf("\n\n\tPALÍNDROMO!!!\n\n\n");
    else
        printf("\n\n\tNÃO É UM PALÍNDROMO!!!\n\n\n");

    system ("pause");
    return (0);
}
