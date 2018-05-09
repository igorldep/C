#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/****************************************************************
 ****************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod13_Arquivos - Roteiro: Exerc�cio N. 3:
 ** Fa�a uma programa que l� todas as informa��es de um arquivo
 ** A.txt e gerar um arquivo B.txt.
 **
 ***************************************************************
 **************************************************************/

void copiar (FILE *tx, FILE *tx2);

int main (){
    FILE *tx, *tx2;
    char c, texto[1001];

    //Arquivos no mesmo diret�rio do exerc�cio
    tx = fopen ("input.txt", "r"); //Arquivo 'A'
    tx2 = fopen ("output.txt", "w"); //Arquivo 'B'

    //Teste para saber se os arquivos foram abertos com sucesso
    if ( !tx ){
        printf("\nErro na abertura do arquivo input!!!\n\n");
        system ("pause");
        return (0);
    }
    if ( !tx2 ){
        printf("\nErro na abertura do arquivo output!!!\n\n");
        system ("pause");
        return (0);
    }

    printf("\tTexto presente no arquivo input.txt:\n\n");
    while ( !feof ( tx ) ){ //eof : end of file
        c = fgetc(tx);
        printf("%c", c);
    }

    //Copiado o conte�do do arquivo A para o arquivo B
    copiar (tx, tx2);

    fclose (tx); //Reabertura do arquivo para nova opera��o
    tx = fopen ("input.txt", "r");

    printf("\n\n\tTexto copiado para o arquivo output.txt:\n\n");
    while ( fgets (texto, 1001, tx ) != NULL )
        printf("%s", texto);
    printf("\n\n"); //Espa�amento final

    fclose (tx);
    fclose (tx2);

    system ("pause");
    return (0);
}

void copiar (FILE *tx, FILE *tx2){
    int ch;

    while ( !feof(tx) ){
        ch = fgetc (tx);
        fputc (ch, tx2);
    }
}
