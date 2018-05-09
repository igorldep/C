#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************************************************************************************
 ********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod08_string - Roteiro: Exerc�cio N. 1:
 ** Fa�a um programa em C que solicite o nome do usu�rio. O programa deve ent�o imprimir:
 ** a) O nome do usu�rio; b) O nome do usu�rio invertido; c) O n�mero de caracteres contidos
 ** no nome do usu�rio; d) O n�mero de vogais do nome do usu�rio; e) O n�mero de consoantes
 ** do nome do usu�rio;
 **
 *******************************************************************************************
 *******************************************************************************************/

int main (){
    char nome [61], vogais [11] = "aeiouAEIOU";
    int i, j, count, count2, consoantes;
    count = count2 = 0;

    printf("\nDigite o seu nome: ");
    gets(nome);

    printf("\n\nSeu nome �: %s\n", nome);

    printf("\nSeu nome invertido �: ");
    for ( i = (strlen (nome) - 1); i >= 0; i-- )
        printf("%c", nome[i]);

    printf("\n\nO n�mero de caracteres contidos no seu nome �: %d\n", strlen(nome));

    for ( i = 0; i < strlen(nome); i++ ){
            if ( nome [i] != ' ' )
                count2 ++; //Contador de caracteres diferentes de espa�os
        for ( j = 0; j < strlen(vogais); j++ ){
            if ( nome[i] == vogais[j] )
                count ++; //Contador de vogais
        }
    }

    consoantes = (count2 - count);

    printf("\nO n�mero de vogais no seu nome �: %d\n", count );
    printf("\nO n�mero de consoantes no seu nome �: %d\n\n", consoantes );

    system ("pause");
    return (0);
}
