#include <stdio.h>
#include <stdlib.h>

int main () {
    int x;
    printf("Digite o número do mês: ");
    scanf("%d", &x);

    if ( x = 1 ){
        printf("Este mês é janeiro");
    }
    else if ( x = 2 ){
        printf("Este mês é fevereiro");
   }
    else if ( x = 3 ){
        printf("Este mês é março");
   }
    else if ( x = 4 ){
        printf("Este mês é abril");
    }
    else if ( x = 5 )
        printf("Este mês é maio");

    else if ( x = 6 )
        printf("Este mês é junho");

    else if ( x = 7 )
        printf("Este mês é julho");

    else if ( x = 8 )
        printf("Este mês é agosto");

    else if ( x = 9 )
        printf("Este mês é setembro");

    else if ( x = 10 )
        printf("Este mês é outubro");

    else if ( x = 11 )
        printf("Este mês é novembro");

    else if ( x = 12 )
        printf("Este mês é dezembro");

    else {
        while ( x > 12 || x < 1 )
        printf("Digite o número do mês: "); scanf("%d", &x);
    }

return 0;
}

