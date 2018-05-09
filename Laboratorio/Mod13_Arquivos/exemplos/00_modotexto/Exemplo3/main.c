#include <stdio.h>
#include <stdlib.h>

/**
 * Lê um caracter por vez e mostra o conteúdo na tela.
 */
int main()
{
    FILE *fp;
    char ch;

    if((fp=fopen("arqtext.txt","r"))==NULL){
       printf("\nO arquivo não pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para gravação");
     }

     while((ch=fgetc(fp)) != EOF){
	 		printf("%c", ch);
     }
     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
