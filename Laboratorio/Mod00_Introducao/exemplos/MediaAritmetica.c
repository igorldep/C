#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    // Declaração de variáveis
    float nota1, nota2, media;
    
    // Entrada de Dados
    printf ("Digite a nota da prova 1: ");     
    scanf ("%f",&nota1);

    printf ("Digite a nota da prova 2: ");     
    scanf ("%f",&nota2);

    // Calcular média
    media = (nota1 + nota2) / 2;
    
    // Impressão da média        
    printf ("\nMédia calculada é igual a %f", media);
    printf ("\nMédia calculada é igual a %6.2f", media);
    
    if (media >= 7){
        printf ("\nParabéns. Você foi aprovado!");              
    }
    else{
        printf ("\nTente outra vez. Você foi reprovado!");              
    }
    
    printf ("\nFim do programa. Tecle algo para continuar...");
    printf ("\n\n\n");
    system("pause");
    
    return(0);
}


