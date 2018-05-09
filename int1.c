#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ano, meses, dias, total;

    printf("Qual sua idade em anos, meses e dias? ");
    scanf("%d %d %d", &ano, &meses, &dias);

    total =  ( (ano * 365) + (meses * 30) + dias );

    printf("\nA sua idade em dias é de aproximadamente %d dias!\n", total);

    system ("pause");
return (0);
}
