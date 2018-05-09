#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, n;
    float vet1[10], vet2[10], vetr[10];

    for ( i = 0; i < 10; i++ ){
        printf("Digite um número: ");
        scanf("%f", &vet1[i] );
    }
    
    for ( i = 0; i < 10; i++ ){
        printf("Digite um número: ");
        scanf("%f", &vet2[i] );
    }
    
    for ( i = 0; i < 10; i++ ){
        vetr[i] = ( vet1[i] * vet2[i] );
    }
    
    printf("A multiplicação dos elementos de mesmo índice é: ");
    
    for ( i = 0; i < 10; i++ ){
        printf( "%.2f, ", vetr[i] );
    }

    system ("pause");
    return (0);
}
