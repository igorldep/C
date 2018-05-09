#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, max, min;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);
    max = min = num;

    do
    {
        printf("Digite outro número inteiro e positivo: ");
        scanf("%d", &num);

        if ( num < 0 )
        {
            printf("\nDigite um número positivo!\n\n");
            continue;
        }
        else if ( num == 0 )
            continue;
        else if ( num > max )
            max = num;
        else if ( num < min )
            min = num;
    }while ( num != 0 );

    printf("O maior valor digitado foi %d, e o menor valor foi %d.\n\n", max, min);

    system("pause");
return (0);
}
