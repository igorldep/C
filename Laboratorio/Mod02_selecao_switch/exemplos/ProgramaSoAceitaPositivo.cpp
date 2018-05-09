#include <stdio.h>
#include <stdlib.h>

int main (){

    int num=0;


    do{
        printf ("\nDigite um número inteiro e positivo: ");
        scanf("%d", &num);
	}
    while(num<0);

    printf ("\n\n\nNúmero digitado: %d ", num);
    printf ("\nFim do programa ");
  	system("pause");
    return(0);

}
