#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    // Declara��o de vari�veis
    float nota1, nota2, media;
    
    // Entrada de Dados
    printf ("Digite a nota da prova 1: ");     
    scanf ("%f",&nota1);

    printf ("Digite a nota da prova 2: ");     
    scanf ("%f",&nota2);

    // Calcular m�dia
    media = (nota1 + nota2) / 2;
    
    // Impress�o da m�dia        
    printf ("\nM�dia calculada � igual a %f", media);
    printf ("\nM�dia calculada � igual a %6.2f", media);
    
    if (media >= 7){
        printf ("\nParab�ns. Voc� foi aprovado!");              
    }
    else{
        printf ("\nTente outra vez. Voc� foi reprovado!");              
    }
    
    printf ("\nFim do programa. Tecle algo para continuar...");
    printf ("\n\n\n");
    system("pause");
    
    return(0);
}


