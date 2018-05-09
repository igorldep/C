#include <stdio.h>
#include <stdlib.h>

/**
 * L� um caracter por vez e mostra o conte�do na tela.
 */
int main()
{
    FILE *fp;
    char ch;

    if((fp=fopen("arqtext.txt","r"))==NULL){
       printf("\nO arquivo n�o pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para grava��o");
     }

     while((ch=fgetc(fp)) != EOF){
	 		printf("%c", ch);
     }
     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
