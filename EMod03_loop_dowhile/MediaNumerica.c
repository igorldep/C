#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int acumulador, num, contador = 1;

    printf("\n\tDigite 10 números inteiros e positivos!\n\n");

    do
    {
        printf("Qual o valor do %dº número: ", contador);
        scanf("%d", &num);

        acumulador  = acumulador + num;
        contador++;
	
    }while ( contador <= 10 );

    printf("\nA média desses números é: %d.\n\n", ( acumulador/10 ) );

    system ("pause");
return (0);
}
