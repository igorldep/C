#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça uma programa que lê todas as informações de um arquivo
A.txt e gerar um arquivo B.txt.
*/
void copiar (FILE *tx, FILE *tx2);

int main (){
    FILE *tx, *tx2;
    char c;
    
    tx = fopen ("A.txt", "r"); //Arquivos no mesmo diretório do exercício 
    tx2 = fopen ("B.txt", "w");
    
    //Teste para saber se os arquivos foram abertos com sucesso
    if ( !tx ){
        printf("\nErro na abertura do arquivo A!!!\n\n");
        system ("pause");
        return (0);
    }
    if ( !tx2 ){
        printf("\nErro na abertura do arquivo B!!!\n\n");
        system ("pause");
        return (0);
    }
    
    printf("\tTexto presente no arquivo A.txt:\n\n");
    while ( !feof ( tx ) ){ //eof : end of file
        c = fgetc(tx);
        printf("%c", c);
    }
    
    //Copiado o conteúdo do arquivo A para o arquivo B
    copiar (tx, tx2);	    
    
    printf("\n\n\tTexto copiado para o arquivo B.txt:\n\n");
    while ( !feof( tx2 ) ){ 
        c = fgetc(tx2);	
        printf("%c", c);        
    }
    printf("\n\n");
            
    fclose (tx);
    fclose (tx2);

    system ("pause");
    return (0);
}

void copiar (FILE *tx, FILE *tx2){
    char aux [3001];
    
    while ( fgets ( aux, 3001, tx ) != NULL )
        fputs ( aux, tx2 );
}
