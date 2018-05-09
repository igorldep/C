#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    if( ( x % 2 ) == 0 )
    {
        printf("Este número é par!\n");
    }
    else //ímpar
    {
        printf("Este número é ímpar!\n");
    }


    if( x > 0 )
    {
        printf("Este número é positivo!\n");
    }
    else if( x < 0 )
    {
        printf("Este número é negativo!\n");
    }
    else //zero
    {
        printf("Este número é o zero!\n");
    }

    system("pause");
return (0);
}
