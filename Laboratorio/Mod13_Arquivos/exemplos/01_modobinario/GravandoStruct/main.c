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
    scanf("%lf", &livro.autor);
    rewind(stdin);
    return livro;
}

int main()
{
    Livro livro;
    char opcao;
    FILE *arquivo;

    if ((arquivo=fopen("Livros.dat", "wb"))== NULL)
        exit(1);

    do{
        livro=getLivro();

        if (fwrite(&livro, sizeof(Livro), 1, arquivo)!=1)
            break;

        printf("\nMais um livro (s/n)?");
        opcao=getche();

    }while(opcao !='n' && opcao!='N');

    fclose(arquivo);

    return 0;
}

