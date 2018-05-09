#include <stdio.h>
#include <stdlib.h>

int fchar ( char letra );

int main ()
{
    int y;
    char letra;

    printf("Digite um caracter: ");
    scanf("%c", &letra);

    y = fchar ( letra );

    if ( y == 1)
        printf("É uma Letra!!\n\n");
    else
        printf("Não é uma Letra!!\n\n");

    system ("pause");
return (0);
}


int fchar ( char letra )
{
    int x;

    x = letra;

    if ( ( x >= 65 && x <= 90 ) || ( x >= 97 && x <= 122 ) )
         return (1);
    else
         return (0);
}
