#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int contador;

    for ( contador = 1; contador <= 50; contador ++)
    {
        if ( (contador % 3) == 0 )
            printf("%d foo\n", contador);
        else if ( (contador % 5) == 0 )
            printf("%d bar\n", contador);
        else if ( (contador % 7) == 0)
            printf("%d baz\n", contador);
        else
            printf("%d\n", contador);
    }

    system ("pause");
return (0);
}
