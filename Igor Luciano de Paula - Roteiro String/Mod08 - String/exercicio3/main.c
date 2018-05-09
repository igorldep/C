#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************************************************************************************
 ********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod08_string - Roteiro: Exercício N. 3:
 ** Faça um programa que pede para o usuário informar o nome para uma variável. A regra para
 ** dar nome a uma variável em C é a seguinte: a) O primeiro caracter pode ser letra, _ ou $;
 ** b) O segundo caracter pode ser qualquer um do grupo a concatenado com número;
 ** c) Repete-se os caracteres do grupo a ou b; Caso o nome da variável na esteja correto o
 ** programa deve imprimir: nome de variável inválido!
 **
 *******************************************************************************************
 *******************************************************************************************/

int main (){
    char nome[31];
    char A[] = "ABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_$";
    char B[] = "1234567890";
    int i, j, count = 0, count2, total;

    printf("Digite o nome para uma variável: ");
    gets(nome);

    for ( j = 0; j < strlen(A); j++ ){
        if ( nome [0] != A[j] )
            count ++;
    }

    if (count == strlen(A) ){
        printf("\nNome de variável inválido!!!\n\n");
        system ("pause");
        return (0);
    }

    strcat(A, B); //concatenando B em A

     for ( i = 0; i < strlen(nome); i++ ){
        count2 = total = 0;
        for ( j = 0; j < strlen(A); j++ ){
            total++;
            if ( nome [i] != A[j] )
                count2 ++;
        }
        if ( count2 == total ){
            printf("\nNome de variável inválido!!!\n\n");
            system ("pause");
            return (0);
        }
    }

    printf("\nNome de variável válido!!!\n\n");

    system ("pause");
    return (0);
}
