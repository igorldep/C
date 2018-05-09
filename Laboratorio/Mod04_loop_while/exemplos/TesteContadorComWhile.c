#include <stdio.h>
#include <stdlib.h>

int main (){
    int contador=0;

    printf ("\nExecutar 5 viagens ");

    while (contador<5){
       printf ("\nViagem Completa!!!");
       contador = contador + 1;
       printf ("\nContador = %d", contador);
    }

    printf ("\nFim do programa ");
	system("pause");

    return(0);
}
