#include <stdio.h>
#include <stdlib.h>

int main (){

    int num=0;
    
    printf ("\nDigite um numero inteiro positivo: ");
    scanf ("%d",&num);
    
    switch(num){
                
       case 0: {
            printf("\nN�mero digitado: ZERO! ");
            break;
       }
       case 1: {
            printf("\nN�mero digitado: UM! ");
            break;
       }
       case 2: {
            printf("\nN�mero digitado: DOIS! ");
            break;
       }
       default: {
            printf("\nN�mero digitado: OUTROS VALORES! ");
            break;
       }

    }
    
    printf ("\nFim do programa ");
    
  	system("pause");

return(0);
}
