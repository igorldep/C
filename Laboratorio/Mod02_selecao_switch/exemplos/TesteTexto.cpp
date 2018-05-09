#include <stdio.h>
#include <stdlib.h>

int main (){

    int lista[] = {10, -2, 3};
    int i=0, j=0;

    printf ("\n-=- Impressão do Vetor  -=- \n\n\n");
        
    for(i=0; i < 3; i++){
        printf ("\nVetor[%d] = %d", i, lista[i]);
    }

    printf ("\nFim do programa!!!");
    system("pause");
    return(0);
}
