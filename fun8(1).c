#include <stdio.h>
#include <stdlib.h>

int fatorial ( int num );

int main ()
{
    int num, x;

    do
    {
        printf("Digite um número inteiro maior ou igual a zero: ");
        scanf("%d", &num);
    }while( num < 0 );

    x = fatorial ( num );

    printf("\nO fatorial de %d! é %d.\n\n", num, x);

    system("pause");
return (0);
}

int fatorial ( int num )
{
    int acumulador = 1;

    for( num; num > 0; num -- )
    {
        acumulador = acumulador * num;
    }

    return (acumulador);
}
