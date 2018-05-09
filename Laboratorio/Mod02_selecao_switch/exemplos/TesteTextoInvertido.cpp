#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char nome[40];

    printf ("\nDigite seu nome:");
    gets(nome);  

    printf ("\nNome Invertido:" );
    
    for (int i=(strlen(nome)-1); i>=0; i--){
        printf("%c", nome[i]);
    }

    system("pause");
    
    return(0);
}
