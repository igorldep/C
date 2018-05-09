#include <stdio.h>
#include <stdio.h>

int main (){
    int mat [6][3], i, j, max, maxi, maxj, min, mini, minj;
    
    for ( i = 0; i < 6; i++ ){ //linha
        for ( j = 0; j < 3; j++ ){ //coluna
            printf("Digite o elemento da linha %d, coluna %d: ", (i + 1), (j + 1) );
            scanf("%d", &mat[i][j]);
        }
    }
    
    max = mat [0][0];
    min = mat [0][0];
    
    for ( i = 0; i < 6; i++ ){ //linha
        for ( j = 0; j < 3; j++ ){ //coluna
            if ( mat[i][j] > max ){
                max = mat [i][j];
                maxi = i + 1; //teoricamente não existe a posição 0, 0 em matrizes/vetores
                maxj = j + 1; //mas, em C, vetores e matrizes começam na posição 0. Por isso +1  
            }
            else if ( mat[i][j] < min ){
                min = mat [i][j];
                mini = i + 1;
                minj = j + 1;
            }
        }
    }

    printf("\n\tO maior elemento da matriz é o %d, e sua posição é a (%d, %d).\tO menor elemento da matriz é o %d, e sua posição é a (%d, %d).\n\n", max, maxi, maxj, min, mini, minj);

    system ("pause");
    return (0);
}
