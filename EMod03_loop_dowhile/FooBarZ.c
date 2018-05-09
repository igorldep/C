#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int contador = 1;

    while (contador <= 50)
    {
        if ( (contador % 3) == 0 )
            printf("%d foo\n", contador);
        else if ( (contador % 5) == 0 )
            printf("%d bar\n", contador);
        else if ( (contador % 7) == 0)
            printf("%d baz\n", contador);
        else
            printf("%d\n", contador);

        contador ++;
    }

    system ("pause");
return (0);
}
