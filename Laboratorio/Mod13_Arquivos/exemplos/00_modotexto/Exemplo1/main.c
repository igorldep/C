#include <stdio.h>
#include <stdlib.h>

/**
 * Lê um caracter por vez e grava no arquivo.
 */
int main()
{
        // clrscr();
     FILE *fp;

     char ch;

    if((fp=fopen("arqtext.txt","r"))==NULL){
       printf("\nO arquivo não pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto");
     }
     printf("\nConteúdo do arquivo:");
     ch=getc(fp);

     while(ch!=EOF){
	 		putchar(ch);
	 		ch=getc(fp);
     }
     fclose(fp);
     printf("\nFim do programa!");
     return 0;
}
