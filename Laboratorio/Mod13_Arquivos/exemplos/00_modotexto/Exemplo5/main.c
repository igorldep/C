#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char linha[80];

    if((fp=fopen("arqtext.txt","r"))==NULL){
       printf("\nO arquivo n�o pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para grava��o");
     }

    while (fgets(linha, 80, fp) != NULL)
        printf("%s", linha);

     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
