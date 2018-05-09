#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa para criptografar uma frase dada pelo usuário. Na criptografia, a frase deverá
ser invertida e as consoantes deverão ser trocadas por #.
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: A#O##E A# UO##E UE
*/

int main(){
    char entrada[101], inversa[101];
    int i, j;
    
    printf("Digite uma frase: ");
    gets(entrada); //a função scanf para string só lê uma palavra
    
    for (i = ( strlen(entrada) - 1 ), j = 0; i >= 0; i--, j++)
        inversa[j] = entrada[i];

    inversa[j] = '\0';

    printf("\nFrase invertida = %s.\n\n", inversa);
    
    for ( i = 0; i < strlen (inversa); i++ ){
        if ( ( inversa [i] != 'a' ) &&  ( inversa [i] != 'e' ) && ( inversa [i] != 'i' ) && ( inversa [i] != 'o' ) && ( inversa [i] != 'u' ) && ( inversa [i] != 'A' ) && ( inversa [i] != 'E' ) && ( inversa [i] != 'I' ) && ( inversa [i] != 'O' ) && ( inversa [i] != 'U' ) ){
            inversa [i] = '#';
        }
        
    }
   
    printf("\nFrase criptografada = %s.\n\n", inversa);
    
    system ("pause");
    return (0);
}
