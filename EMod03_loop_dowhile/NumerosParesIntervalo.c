#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Digite dois números inteiros, onde o segundo numero deve ser maior que o primeiro: ");
    scanf("%d %d", &x, &y);

    if ( x > y )
    {
        printf("\n\nErro: o segundo numero deve ser maior que o primeiro!!!\n\n");
        system("pause"); return(0);
    }

    if ( ( x % 2 ) != 0 ) //impar
    {
        while ( x <= y)
        {
            printf("\n%d.", x);
            x = x + 2;
        }
    }
    else //par
    {
        x++;
        while ( x <= y)
        {
            printf("\n%d.", x);
            x = x + 2;
        }
    }

    system("pause");
return (0);
}
