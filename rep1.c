#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, x = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    while ( x <= num)
    {
        if ( (num % x) == 0 )
            printf("%d\n", x);

        x++;
    }
    system("pause");
return(0);
}
