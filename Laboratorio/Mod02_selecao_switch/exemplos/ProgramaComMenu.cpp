#include <stdio.h>
#include <stdlib.h>

int main (){

    int num=0, opcao=0;


    do{
        printf ("\n-=-   Menu de op��es -=-  ");

        printf ("\n-=-   Per�metro do c�rculo..............[1]");
        printf ("\n-=-   �Per�metro do ret�ngulo...........[2]");
        printf ("\n-=-   Per�metro do tri�ngulo............[3]");
        printf ("\n-=-   Sair..............................[4]");

        printf ("\n\n\n-=-   Digite sua op��o: ");
        scanf("%d", &opcao);

        switch(opcao){

           case 1: {
                printf("\nCalcular per�metro do c�rculo! ");
                break;
           }
           case 2: {
                printf("\nCalcular per�metro do ret�ngulo! ");
                break;
           }
           case 3: {
                printf("\nCalcular per�metro do tri�ngulo! ");
                break;
           }
           case 4: {
                printf("\nSair! ");
                break;
           }
           default: {
                printf("\nN�mero digitado: OUTROS VALORES! ");
                break;
           }
        }
    }while(opcao!=4);

    printf ("\nFim do programa ");
  	system("pause");
    return(0);

}
