#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("Qual o ano: ");
    scanf("%d", &ano);

    if ( ( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )
    {
        printf("Este ano é bissexto\n\n");
    }
    else
    {
        printf("Este ano não é bissexto\n\n");
    }
    system ("pause");

return (0);
}
