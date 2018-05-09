#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6. Escreva um programa que solicite ao usuário 10 reais e os armazene em arquivo. Em seguida
deve solicitar ao usuário um número entre 1 e 10 e mostrar o valor que tinha introduzido nessa
ordem. Deverá também mostrar o primeiro e o último elemento do arquivo.
*/

int main (){
    FILE *tx;
    char reais [10]; //Depende do tamanho dos números reais
    int i, x;
    
    tx = fopen ("numeros.txt", "w");
    
    if ( !tx ){
        printf("\nErro na abertura do arquivo!!!\n\n");
        system ("pause");
        return (0);
    }
    
    printf("\nDigite o 10 números reais: ");
    gets (reais);

    for ( i = 0; i < strlen (reais); i++ )
        fputc ( reais[i], tx );
       
    printf("Digite um inteiro entre 1 e 10:");
    scanf("%d", &x);
    
    printf("\nO valor introduzido nesta posição é: ");
    
    x --;
    do{
        printf("%c", reais[x]);    
        x++;
    }while( reais [x] != ' ');

    printf("\nO primeiro valor é o : ");
    
    x = 0;
    do{
        printf("%c", reais[x]);    
        x++;
    }while( reais [x] != ' ');
     
    printf("\nO último valor é o : ");
    
    x = strlen (reais);
    do{
        printf("%c", reais[x]);    
        x--;
    }while( reais [x] != ' ');
    
    printf("\n\n");

    fclose (tx);            
    system ("pause");
    return (0);
}
