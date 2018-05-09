#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************************************************************************************
 ********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod08_string - Roteiro: Exercício N. 1:
 ** Faça um programa em C que solicite o nome do usuário. O programa deve então imprimir:
 ** a) O nome do usuário; b) O nome do usuário invertido; c) O número de caracteres contidos
 ** no nome do usuário; d) O número de vogais do nome do usuário; e) O número de consoantes
 ** do nome do usuário;
 **
 *******************************************************************************************
 *******************************************************************************************/

int main (){
    char nome [61], vogais [11] = "aeiouAEIOU";
    int i, j, count, count2, consoantes;
    count = count2 = 0;

    printf("\nDigite o seu nome: ");
    gets(nome);

    printf("\n\nSeu nome é: %s\n", nome);

    printf("\nSeu nome invertido é: ");
    for ( i = (strlen (nome) - 1); i >= 0; i-- )
        printf("%c", nome[i]);

    printf("\n\nO número de caracteres contidos no seu nome é: %d\n", strlen(nome));

    for ( i = 0; i < strlen(nome); i++ ){
            if ( nome [i] != ' ' )
                count2 ++; //Contador de caracteres diferentes de espaços
        for ( j = 0; j < strlen(vogais); j++ ){
            if ( nome[i] == vogais[j] )
                count ++; //Contador de vogais
        }
    }

    consoantes = (count2 - count);

    printf("\nO número de vogais no seu nome é: %d\n", count );
    printf("\nO número de consoantes no seu nome é: %d\n\n", consoantes );

    system ("pause");
    return (0);
}
