#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    if((fp=fopen("arqtext.txt","w"))==NULL){
       printf("\nO arquivo não pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para gravação");
     }

    fputs("Será que vai chover hoje?\n", fp);
    fputs("Belo Horizonte é a capital de Minas Gerais!\n", fp);
    fputs("Que vontade de pegar um praia!\n", fp);

     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
