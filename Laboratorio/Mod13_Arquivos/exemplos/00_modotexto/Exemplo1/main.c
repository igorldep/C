#include <stdio.h>
#include <stdlib.h>

/**
 * L� um caracter por vez e grava no arquivo.
 */
int main()
{
        // clrscr();
     FILE *fp;

     char ch;

    if((fp=fopen("arqtext.txt","r"))==NULL){
       printf("\nO arquivo n�o pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto");
     }
     printf("\nConte�do do arquivo:");
     ch=getc(fp);

     while(ch!=EOF){
	 		putchar(ch);
	 		ch=getc(fp);
     }
     fclose(fp);
     printf("\nFim do programa!");
     return 0;
}
