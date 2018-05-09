#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod07_Matriz - Roteiro: Exercício N. 2:
 *Faça um programa que solicite ao usuário uma matriz A e uma matriz B de tamanho 5x5. Logo
 *em seguida o programa deve imprimir: a) A matriz C = A + B. b) A matriz D = A x B.
 */

int main ()
{
    int i, j;
    float matA[5][5], matB[5][5], matC[5][5], matD[5][5];

    //Entradas
    printf("\n\t   Matriz A: \n");
    for( i = 0; i < 5; i++ ){ //linha
        for( j = 0; j < 5; j++ ){ //coluna
            printf("Digite o elemento da linha %d, coluna %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%f", &matA[i][j]);
        }
    }
    
    printf("\n\n\t   Matriz B: \n");
    for( i = 0; i < 5; i++ ){
        for( j = 0; j < 5; j++ ){
            printf("Digite o elemento da linha %d, coluna %d: ", ( i + 1 ), ( j + 1 ) );
            scanf("%f", &matB[i][j]);
        }
    }

    //CálculoS
    //Soma
    for( i = 0; i < 5; i++ ){
        for( j = 0; j < 5; j++ ){
            matC[i][j] = (matA[i][j] + matB[i][j]);
        }
    }

    //Multiplicoção
    for( i = 0; i < 5; i++ ){
        for( j = 0; j < 5; j++ ){
            matD[i][j] = (matA[i][j] * matB[i][j]);
        }
    }

    //Saída
    printf("\n\n\tMatriz C ( A + B ): \n");
    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if ( ( matC[i][j] >= 0 ) && matC[i][j] < 10)
                printf(" "); //alinhamento
            printf("  %.2f  ", matC[i][j]);
        }
        printf("\n"); //pular linha quando terminar a coluna
    }
    
    printf("\n\n\tMatriz D ( A + B ): \n");
    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if ( ( matD[i][j] >= 0 ) && matD[i][j] < 10)
                printf(" "); //alinhamento
            printf("  %.2f  ", matD[i][j]);
        }
        printf("\n"); //pular linha quando terminar a coluna
    }

    system ("pause");
    return (0);
}
