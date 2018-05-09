#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_BUFFER 1024

void copiaArquivo(const char *origem, const char *destino);

/* Copia arquivo em modo binário */
int main()
{

   char arquivoOrigem[]="main.c";
   char arquivoDestino[]="copia_main.c";

   printf("\nIniciando a cópia do arquivo...");
   copiaArquivo(arquivoOrigem, arquivoDestino);
   printf("\nFim da cópia.");
   return 0;
}

void copiaArquivo(const char *origem, const char *destino){

    char buffer[TAMANHO_BUFFER];

    int bytesLidos=0;

    FILE *fArquivoOrigem, *fArquivoDestino;

    if((fArquivoOrigem=fopen(origem,"rb"))==NULL){
       printf("\nErro na abertura do arquivo origem");
       exit(1);
     }
     else{
       printf("\nArquivo origem foi aberto com sucesso");
     }

    if((fArquivoDestino=fopen(destino,"wb"))==NULL){
       printf("\nErro na abertura do arquivo destino");
       exit(1);
     }
     else{
       printf("\nArquivo destino foi aberto com sucesso");
     }

     do{
        bytesLidos=fread(buffer, sizeof(char), sizeof(buffer), fArquivoOrigem);
        fwrite(buffer, sizeof(char), bytesLidos, fArquivoDestino);
     }while(bytesLidos);

     // Fecha os arquivos
     fclose(fArquivoOrigem);
     fclose(fArquivoDestino);
}
