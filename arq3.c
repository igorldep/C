#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3. Faça um programa que abra um arquivo texto já existente e o leia, caracter por caracter, até que o
final do arquivo seja atingido.
*/

int main (){
    FILE *tx;
    char c;
    char string [101]; //O último não conta - \0
    
    tx = fopen ("texto.txt", "r");
    
    //Teste para saber se o arquivo foi aberto com sucesso
    if ( !tx ){
        printf("\nErro na abertura do arquivo!!!\n\n");
        system ("pause");
        return (0);
    }
    
    printf("\tTexto presente no arquivo texto.txt:\n\n");
    
    while ( !feof( tx ) ){ //eof : end of file
        c = fgetc(tx);
        printf("%c", c);
    }
    printf("\n\n");
    
    
    fclose (tx);
    system ("pause");
    return (0);
}
