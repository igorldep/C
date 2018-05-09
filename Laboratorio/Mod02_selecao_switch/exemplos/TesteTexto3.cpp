#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char nome[40];
    char nome2[40];

    printf ("\nDigite seu nome:");
    gets(nome); 

    strcpy(nome2, nome); // copia nome para nome2
    
    printf ("\nNome: %s", nome);
    printf ("\nCópia de nome: %s", nome2);

    system("pause");
    
    return(0);
}
