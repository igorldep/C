#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char linha[80];

    if((fp=fopen("arqtext.txt","r"))==NULL){
       printf("\nO arquivo não pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para gravação");
     }

    while (fgets(linha, 80, fp) != NULL)
        printf("%s", linha);

     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
