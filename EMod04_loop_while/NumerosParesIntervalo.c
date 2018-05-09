#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y;

    printf ("Digite dois números inteiros positivos(o segundo número deve ser maior que o primeiro): ");
    scanf("%d %d", &x, &y);

    if ( x > y )
    {
        printf("\n\tErro! Você digitou o primeiro número maior que o segundo!\n\n");
        system("pause");
        return (0);
    }

    if( ( x % 2 ) == 0 )
    {
        printf("\n%d\n", x);

        while ( x < y )
        {
            printf("%d\n", ( x = x + 2 ) );
        }
    }
    else
    {
        x++; printf("\n%d\n", x);

        while ( x < y )
        {
            printf("%d\n", ( x = x + 2 ) );
        }
    }

    system("pause");
return (0);
}
