#include <stdio.h>
#include <stdlib.h>

int fmaior (int mat[][5], int x);

int main (){
    int i, j, mat [5][5], quant, x;
    
    for ( i = 0; i < 5; i++ ){ //linha
        for ( j = 0; j < 5; j++ ){ //coluna
            printf("Digite o elemento da linha %d e coluna %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%d", &mat [i][j]);
        }
    }
    
    printf("Digite um número inteiro: "); scanf("%d", &x);
    
    quant = fmaior (mat, x);
    
    printf("\nO número %d esta prensente na matriz %d vezes.\n\n", x, quant);

    system ("pause");
    return (0);
}

int fmaior (int mat[][5], int x){
    int quant = 0, i, j;
    
    for ( i = 0; i < 10; i++ ){ //linha
        for ( j = 0; j < 10; j++ ){ //coluna
            if ( mat [i][j] == x )
                quant ++;
        }
    }

    quant = ( quant / 2 );

    return (quant);
}
