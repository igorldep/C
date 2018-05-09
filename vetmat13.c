#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j;
    float mat [5][5], soma = 0;
    
    for ( i = 0; i < 5; i++ ){ // i = linha
        for ( j = 0; j < 5; j++ ){ // j = coluna
            printf("Digite o elemento da linha %d e coluna %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%f", &mat [i][j]);
        }
    }
    
    for ( i = 0; i < 5; i++ ){ // i = linha
        for ( j = 0; j < 5; j++ ){ // j = coluna
            if ( i == j ){
                soma = ( soma + mat [i][j] );
            }
        }
    }
    
    printf("\nA soma da diagonal principal desta matriz é: %.2f\n\n", soma);

    system ("pause");
    return (0);
}
