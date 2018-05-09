#include <stdio.h>
#include <stdlib.h>

/*18. Faça uma função que receba uma matriz 10x10 de números inteiros e retorne o maior elemento.
Este valor deverá ser mostrado no programa principal.*/

int fmaior (int mat[][10]);

int main (){
    int i, j, mat [10][10], maior;
    
    for ( i = 0; i < 10; i++ ){ //linha
        for ( j = 0; j < 10; j++ ){ //coluna
            printf("Digite o elemento da linha %d e coluna %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%d", &mat [i][j]);
        }
    }
    
    maior = fmaior (mat);
    
    printf("\nO maior elemento da matriz é: %d\n\n", maior);

    system ("pause");
    return (0);
}

int fmaior (int mat[][10]){
    int max = mat [0][0], i, j;
    
    for ( i = 0; i < 10; i++ ){ //linha
        for ( j = 0; j < 10; j++ ){ //coluna
            if ( mat [i][j] > max )
                max = mat [i][j];
        }
    }

    return (max);
}
