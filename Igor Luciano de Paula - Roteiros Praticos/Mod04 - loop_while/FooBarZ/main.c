#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Prática N. 5:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *FooBarZ. O programa faz um loop de 1 a 50 e imprime cada valor do contador em uma linha.
 *Todos os múltiplos de 3 deve ser sequida da String "foo", e os múltiplos de 5 sequida de "bar"
 *e os de 7 seguidos de "baz".
 */

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
