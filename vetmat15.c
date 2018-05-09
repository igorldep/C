#include <stdio.h>
#include <stdlib.h>

int main (){
    int mat1 [3][8], mat2 [3][8], matmais [3][8], matmenos [3][8], i, j; 

    printf("\tPrimeira Matriz\n");
    for ( i = 0; i < 3; i++ ){ //linha
        for ( j = 0; j < 8; j++ ){ //coluna
            printf("Digite o elemento da linha %d e coluna %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%d", &mat1 [i][j]);
        }
    }
    
    printf("\tSegunda Matriz\n");
    for ( i = 0; i < 3; i++ ){ //linha
        for ( j = 0; j < 8; j++ ){ //coluna
            printf("Digite o elemento da linha %d e coluna %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%d", &mat2 [i][j]);
        }
    }
    
    for ( i = 0; i < 3; i++ ){ //linha
        for ( j = 0; j < 8; j++ ){ //coluna
            matmais [i][j] = ( mat1 [i][j] + mat2 [i][j] );
            matmenos [i][j] = ( mat1 [i][j] - mat2 [i][j] );
        }
    }
    
    printf("\n\t\t\tSoma das Matrizes:\n\t");    
    for ( i = 0; i < 3; i++ ){ //linha
        for ( j = 0; j < 8; j++ ){ //coluna
            printf("   %d  ", matmais [i][j]);
        }
        printf("\n\n\t");
    }

    printf("\n\t\t\tSubtração das Matrizes:\n\t"); 
    for ( i = 0; i < 3; i++ ){ //linha
        for ( j = 0; j < 8; j++ ){ //coluna
            printf("   %d  ", matmenos [i][j]);
        }
        printf("\n\n\t");
    }
    
    printf("\n\n");

    system ("pause");
    return (0);
}
