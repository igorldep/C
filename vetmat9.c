#include <stdio.h>
#include <stdlib.h>

void ordenar (int *A[]);

int main (){
    int A[5], i;
    
    for ( i = 0; i < 5; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &A[i] );
    }
    
    ordenar (*A);
    
    printf("\nA ordem crescente do vetor é:");
    
    for ( i = 0; (i < 5); i++){
        printf("%d ", A[i] );
    }
    
    printf("\n\n");

    system ("pause");
    return (0);
}
//só a função
void ordenar (int *A[]){
    int aux = *A[0], i, n;
    
    for ( i = 0; i < 5; i++){
        for ( n = i + 1; n < 5; n++){
            if ( *A[i] > *A[n] ){
                aux = *A[i];
                *A[i] = *A[n];
                *A[n] = aux;
            }
        }

    }
}
