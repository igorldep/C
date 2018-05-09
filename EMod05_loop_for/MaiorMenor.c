#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int contador;
    float x, max, min;
    
    printf("\tDigite 10 números!\n\nDigite o 1 número: ");
    scanf("%f", &x);
    max = min = x;

    for( contador = 2; contador <= 10; contador++ )
    {
        printf("Digite o %d número: ", contador);
        scanf("%f", &x);

        if ( x > max )
            max = x;
        else if ( x < min )
        {
            if ( x != -1 )
                min = x;
        }

    }

    printf("\nO maior valor digitado foi %.2f e o menor valor foi %.2f.\n\n", max, min);

    system("pause");
return (0);
}
