#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /* Declaracao de Variaveis */
    float valorReal=0, valorDolar=0;
    float cotacao=0; 
    
    printf ("Digite o valor em real: "); 
    scanf ("%f",&valorReal);

    printf ("Digite a cotação do dia (real/dolar): "); 
    scanf ("%f",&cotacao);
    
    valorDolar = valorReal / cotacao;
    
    
    printf ("\n\n%10.2f em reais equivale a %10.2f em dólar.", valorReal, valorDolar);
    
    system("pause");
    return(0);
}

