#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    if((fp=fopen("arqtext.txt","w"))==NULL){
       printf("\nO arquivo n�o pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para grava��o");
     }

    fputs("Ser� que vai chover hoje?\n", fp);
    fputs("Belo Horizonte � a capital de Minas Gerais!\n", fp);
    fputs("Que vontade de pegar um praia!\n", fp);

     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
