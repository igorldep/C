#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nome1[40];
    char nome2[40];
    printf ("\nDigite nome 1: ");
    gets(nome1); 
    printf ("\nDigite nome 2: ");
    gets(nome2); 
    int diferenca = strcmp(nome1, nome2);
    printf ("\nDiferença da comparação entre %s e %s = %d", nome1, nome2, diferenca);
    
    if(diferenca==0){
        printf ("\n%s é igual a %s", nome1, nome2);
    }    
    else if (diferenca > 0){
        printf ("\n%s precede %s !!!", nome2, nome1);
    }
    else {
        printf ("\n%s é precede %s !!!", nome1, nome2);
    }

    system("pause");
    return(0);
}
