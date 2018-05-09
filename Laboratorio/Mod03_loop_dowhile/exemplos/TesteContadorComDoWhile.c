#include <stdio.h>
#include <stdlib.h>

int main (){    
    int contador=0;
    
    printf ("\nExecutar 5 viagens ");
    
    do{    
       printf ("\nViagem Completa!!!");           
       contador = contador + 1;
       printf ("\nContador = %d", contador);
    }while(contador<5);    
    
    printf ("\nFim do programa ");
	system("pause");
    
    return(0);
}
