#include <stdio.h>
#include <stdlib.h>

int main (){

    int num=0, opcao=0;


    do{
        printf ("\n-=-   Menu de opções -=-  ");

        printf ("\n-=-   Perímetro do círculo..............[1]");
        printf ("\n-=-   ÁPerímetro do retângulo...........[2]");
        printf ("\n-=-   Perímetro do triângulo............[3]");
        printf ("\n-=-   Sair..............................[4]");

        printf ("\n\n\n-=-   Digite sua opção: ");
        scanf("%d", &opcao);

        switch(opcao){

           case 1: {
                printf("\nCalcular perímetro do círculo! ");
                break;
           }
           case 2: {
                printf("\nCalcular perímetro do retângulo! ");
                break;
           }
           case 3: {
                printf("\nCalcular perímetro do triângulo! ");
                break;
           }
           case 4: {
                printf("\nSair! ");
                break;
           }
           default: {
                printf("\nNúmero digitado: OUTROS VALORES! ");
                break;
           }
        }
    }while(opcao!=4);

    printf ("\nFim do programa ");
  	system("pause");
    return(0);

}
