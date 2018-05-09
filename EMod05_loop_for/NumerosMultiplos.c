#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, count;

    do
    {
        printf("Digite um número inteiro maior que 0 e menor que 10: "); 
        scanf("%d", &x);
    }while( ( x < 1 ) || ( x > 10) );
	
    for ( count = x ; count <= 500 ; count++)
    {
        if ( ( count % x ) == 0 )
        {
            printf("Número %d: Este número é multiplo!\n", count);
        }
        else
        {
            printf("Número %d: Este número não é multiplo!\n", count);
        }
    } 


    system("pause");
return(0);

}
