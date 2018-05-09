#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int  contador;
    float nota, acumulador = 0, x;

    for (contador = 1; contador <= 10; contador ++)
    {
        printf("\nDigite a %dº nota: ", contador);
        scanf("%f", &nota);

        acumulador = acumulador + nota;
    }

    x = ( acumulador / 10 );

    printf("\nO valor total de notas é %.2f. A média dos números digitados é %.2f.\n\n", acumulador, x);

    system ("pause");
return (0);
}
