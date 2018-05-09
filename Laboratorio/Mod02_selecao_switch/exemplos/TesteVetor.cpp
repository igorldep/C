#include <stdio.h>
#include <stdlib.h>

int main (){

    double notas[5];
    double media=0, soma=0, menor=0;
    int i=0;
    
    for(i=0; i < 5; i++){
        printf ("\nDigite e nota %i:", i);
        scanf("%lf", &notas[i]);
    }

    menor = notas[0];
    
    // Calculo da média    
    for(i=0; i < 5; i++){
       soma = soma + notas[i];
       
       if (menor < notas[i]){
          // Efetuar troca
          menor = notas[i];
       }
    }

    media = soma / 5;
    
    printf ("\nSoma total = %6.2lf ", soma);
    printf ("\nMédia      = %6.2lf ", media);
    printf ("\nMenor nota = %6.2lf ", menor);
    
    printf ("\t\tFim do programa ");
    system("pause");

    return(0);
}
