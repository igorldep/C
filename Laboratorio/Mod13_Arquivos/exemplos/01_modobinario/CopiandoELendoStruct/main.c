#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_BUFFER 1024

typedef struct Livro{
    char titulo[50];
    char autor[50];
    double preco;
} Livro;

Livro getLivro(){
    Livro livro;
    printf("\nDigite o título do livro: ");
    gets(livro.titulo);
    printf("\nDigite o autor do livro: ");
    gets(livro.autor);
    printf("\nDigite o preço do livro: ");
    scanf("%lf", &livro.preco);
    rewind(stdin);
    return livro;
}

void imprimeLivro(Livro livro){
    printf("\nDados do livro: ");
    printf("\nTítulo: %s", livro.titulo);
    printf("\nAutor: %s", livro.autor);
    printf("\nPreço: %.2lf", livro.preco);
}
int main()
{
    Livro livro;
    char opcao;
    FILE *arquivo;

    if ((arquivo=fopen("Livros.dat", "ab+"))== NULL)
        exit(1);

    do{
        livro=getLivro();

        if (fwrite(&livro, sizeof(Livro), 1, arquivo)!=1)
            break;

        printf("\nMais um livro (s/n)?");
        opcao=getche();

    }while(opcao !='n' && opcao!='N');

    // Descarrega o buffer
    fflush(arquivo);
    fseek(arquivo, 0, 0);
    puts("\nLISTA DE LIVROS DO ARQUIVO");
    puts("=================================");

    while(fread(&livro, sizeof(Livro), 1, arquivo)==1){
        imprimeLivro(livro);
    }

    fclose(arquivo);

    return 0;
}

