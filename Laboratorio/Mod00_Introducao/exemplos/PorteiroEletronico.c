#include <stdio.h>
#include <stdlib.h>

void main ()
{
    /* Declaracao de Variaveis */
    int anoNascimento=0, anoAtual=0, idade=0;
    
    printf ("Digite o ano de seu nascimento: "); 
    // Entada de dados
    scanf ("%d",&anoNascimento);

    printf ("Digite o ano atual: "); 
    // Entada de dados
    scanf ("%d",&anoAtual);

    // C�lculo da idade
    idade = anoAtual - anoNascimento;
    
    // Sa�da de dados
    printf ("\nSua idade aproximada � igual a %d ", idade);
    
    system("pause");
 
}

