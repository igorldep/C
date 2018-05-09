#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, max, min;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &x);
    max = min = x;

    while ( x != -1 )
    {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &x);

        if ( x > max )
            max = x;
        else if ( x < min )
        {
            if ( x != -1 )
                min = x;
        }

    }

    printf("\nO maior valor digitado foi %d e o menor valor foi %d.\n\n", max, min);

    system("pause");
return (0);
}
