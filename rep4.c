#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont, idade, nota, nota3 = 0, nota2 = 0, nota1 = 0, idade3 = 0;

    for ( cont = 1; cont <= 5; cont++ )
    {
        printf("Qual sua idade e sua nota para o filme: ");
        scanf("%d %d", &idade, &nota);

        if ( nota == 3 )
        {
            nota3 ++;
            idade3 = idade3 + idade;
        }
        else if ( nota == 2 )
            nota2 ++;
        else if ( nota == 1 )
            nota1 ++;
    }

    printf("\tA média das idades das pessoas que responderam ótimo: %d.\n\tA quantidade de pessoas que responderam regular: %d.\n\tA percentagem de pessoas que responderam bom, entre todos os espectadores analisados: %d%%.\n\n", (idade3 / nota3), nota1, ( (100 * nota2) / 5) );

    system("pause");
return (0);
}
