#include <stdio.h>
#include <stdlib.h>

/*6. Faça um programa que faça a soma de todos os números de um vetor de números inteiros de
qualquer tamanho escolhido pelo usuário. Os números do vetor serão digitados pelo usuário
também. Faça a alocação dinâmica do vetor.*/

int main (){
    int tam, total = 0, i, *v;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    
    v = (int *) malloc (sizeof (int) * tam);
    
    for ( i = 0; i < tam; i++){
        printf("Digite um %d elemento: ", ( i + 1 ) );
        scanf("%d", &v[i]);
        
        total = total + v[i];
    }
    
    free (v);
    printf("A soma de todos elementos digitados é %d. \n\n", total);
    
    return system 
}
