#include <stdio.h>
#include <stdlib.h>

void semelhantes (int v1[], int v2[]);

int main (){
    int v1[10], v2[10], i;

    for ( i = 0; (i < 10); i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &v1[i] );
    }
    
    for ( i = 0; (i < 10); i++){
        printf("Digite outros número inteiro: ");
        scanf("%d", &v2[i] );
    }
    
    semelhantes ( v1, v2 );

    system ("pause");
    return (0);
}
////////////// só a função
void semelhantes (int v1[], int v2[]){
    int i, n;
    
    printf("\nA intersecção entre os dois vetores é: ");

    for ( i = 0; i < 10; i++ ){
        for ( n = 0; n < 10; n++ ){        
           if ( v1[i] == v2[n] )
                printf("%d ", v1[i] );
        }
    }
    
    printf("\n\n");
}
