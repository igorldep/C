#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, contador = 1, acumulador = 0;

    while( contador <= 10 )
    {
        printf("\nDigite o %dº número: ", contador);
        scanf("%d", &x);

        if ( x == -1 )
            break;
        else if ( x > 0 )
        {
            acumulador = acumulador + x;
            contador ++;
        }
    }

    printf("\nA média dos números digitados é %d.\n\n", ( acumulador / ( contador - 1 ) ) );

    system ("pause");
return (0);
}
