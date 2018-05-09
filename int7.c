#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float s, a1, an, n;

    printf("Digite o valor do primeiro termo: "); scanf("%f", &a1);
    printf("Digite o valor do ultimo termo: "); scanf("%f", &an);
    printf("Digite o número de termos: "); scanf("%f", &n);

    s = ( ( ( a1 + an ) * n ) / 2 );

    printf("\nO valor da P.A. é: %.2f\n", s);

    system("pause");
return (0);
}
