#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, x, primos, cont, y;
    primos = 0;

    for( y = 1; y <= 10; y++ )
    {
        x = 1; cont = 0;
        printf("Digite um número: ");
        scanf("%d", &num);

        while ( x <= num)
        {
            if ( (num % x) == 0 )
                cont ++;

            x++;
        }

        if(cont == 2)
            primos ++;

    }

    printf("A quantidade de números primos entre os números digitados é: %d.\n\n", primos);

    system("pause");
return (0);
}
