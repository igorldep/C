#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*2.   Faça   um   programa   que   leia   uma   string   do   teclado   e   escreva-a,   caracter   por   caracter   em   um arquivo texto em disco. */

int main (){
    FILE *tx;
    char string [101]; //O último não conta \0
    int i;
    
    tx = fopen ("texto.txt", "w");
    
    //Teste para saber se o arquivo foi aberto com sucesso
    if ( !tx ){
        printf("\nErro na abertura do arquivo!!!\n\n");
        system ("pause");
        return (0);
    }
    
    printf("\tDigite o texto com até 100 caracteres:\n\n");
    gets(string);
    
    for ( i = 0; i < strlen (string); i++ ){
        fputc ( string[i], tx );
    }
    
    fclose (tx);
    system ("pause");
    return (0);   

}

/*

aluno@ntic-201:~/Documentos$ gcc arq2.c
arq2.c: In function ‘main’:
arq2.c:22:5: warning: ‘gets’ is deprecated (declared at /usr/include/stdio.h:638) [-Wdeprecated-declarations]
     gets(string);
     ^
/tmp/ccxONrmh.o: na função `main':
arq2.c:(.text+0x6b): aviso: the `gets' function is dangerous and should not be used.

*/

/*

aluno@ntic-201:~/Documentos$ gcc --version
gcc (Ubuntu 4.9.2-10ubuntu13) 4.9.2
Copyright (C) 2014 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*/
