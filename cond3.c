#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float x;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    if (x <= 1 )
    {
        printf("O valor de f(x) é igual a 1.\n");
    }
    else if ( ( x > 1 ) && ( x <= 2 ) )
    {
        printf("O valor de f(x) é igual a 2.\n");
    }
    else if ( ( x > 2 ) && ( x <= 3 ) )
    {
        printf("O valor de f(x) é igual a %.2f.\n", ( x*x ) );
    }
    else //x > 3
    {
        printf("O valor de f(x) é igual a %.2f.\n", ( x*x*x ) );
    }

    system("pause");
return (0);
}
