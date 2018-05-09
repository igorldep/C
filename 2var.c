#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y, z;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    if ( x > y )
    {
        if ( x > z )
        {
            printf("%d é o maior número!\n", x );

            if ( y > z )
                printf("%d é o menor número!\n", z );
            else
                printf("%d é o menor número!\n", y );
        }
        else // x < z
        {
            printf("%d é o maior número!\n", z );
            printf("%d é o menor número!\n", y );
        }
    }
    else // x < y
    {
        if ( x > z )
        {
            printf("%d é o maior número!\n", y );
            printf("%d é o menor número!\n", z );
        }
        else // x < z
        {
            printf("%d é o menor número!\n", x );

            if ( y > z )
                printf("%d é o maior número!\n", y );
            else
                printf("%d é o maior número!\n", z );
        }

    }

    system("pause");
return (0);
}
