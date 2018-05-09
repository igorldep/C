#include <stdio.h>
#include <stdlib.h>

int main ()
{
    unsigned int x, contador = 1, acumulador = 0;

    while( contador <= 10 )
    {
        printf("\nDigite o %dº número: ", contador);
        scanf("%d", &x);

        acumulador = acumulador + x;
        contador ++;
    }

    printf("\nA média dos números digitados é %d.\n\n", ( acumulador / 10 ) );

    system ("pause");
return (0);
}
