#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet1 [6], i, contpar = 0, contimpar = 0;
    
    for (i = 0; i < 6; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &vet1[i]);
    }
    
    printf("Números pares digitados: ");
    
    for (i = 0; i < 6; i++) {
        if ( ( vet1[i] % 2 ) == 0 ) { //par
            printf("\n\t%d -> par ", vet1[i]);
            contpar ++;
        }
        else { //ímpar
            printf("\n\t\t%d -> ímpar ", vet1[i]);
            contimpar ++;
        }
    }
    
    printf("\n\n A quantidade de números ímpares digitados foi %d, e de números pares foi %d.\n\n", contimpar, contpar);
    
    system ("pause");
    return (0);
}

