#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   char titulo[40];
   int codigo;
   double preco;

    if((fp=fopen("arqtext.txt","r"))==NULL){
       printf("\nO arquivo não pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para leitura.\n");
     }

   printf("\nConteúdo do arquivo:\n");

   while (fscanf(fp, "%d %s %lf ", &codigo, titulo, &preco) != EOF){
        printf("\n%d %s %lf", codigo, titulo, preco);
   }
     fclose(fp);
     printf("\n\nFim do programa!");
    return 0;
}
