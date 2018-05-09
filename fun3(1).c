#include <stdio.h>
#include <stdlib.h>

int maior (int x, int y, int z);

int main ()
{
    int x, y, z, num;

    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    num = maior (x, y, z);

    printf("O maior número é o %d!\n", num);

    system("pause");
return (0);
}

int maior (int x, int y, int z)
{
    int max;
    max = x;

    if ( max < y )
        max = y;

    if ( max < z )
        max = z;

    return (max);
}
