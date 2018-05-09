#include <stdio.h>
#include <stdlib.h>

/**
 * Lê um caracter por vez e grava no arquivo.
 */
int main()
{
    FILE *fp;
    char ch;

    if((fp=fopen("arqtext.txt","w"))==NULL){
       printf("\nO arquivo não pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para gravação");
     }

     printf("\nEntre com o texto:");

     while((ch=getche()) != '\r'){
	 		fputc(ch, fp);
     }
     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
