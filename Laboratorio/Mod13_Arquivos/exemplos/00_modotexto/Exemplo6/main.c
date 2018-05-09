#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   char titulo[40];
   int codigo;
   double preco;

    if((fp=fopen("arqtext.txt","w"))==NULL){
       printf("\nO arquivo n�o pode ser aberto");
       exit(1);
     }
     else{
       printf("\nO arquivo foi aberto para grava��o");
     }

   while (1){
    printf("\nDigite o c�digo do livro ou -1 para sair: ");
    scanf("%d", &codigo);

    if (codigo == -1)
        break;

    printf("\nDigite o t�tulo do livro:");
    scanf("%s", titulo);
    printf("\nDigite o pre�o do livro:");
    scanf("%lf", &preco);
    fprintf(fp, "%d %s %lf \n", codigo, titulo, preco);
   }

     fclose(fp);
     printf("\nFim do programa!");
    return 0;
}
