#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somaNumeros(int x, int y);
int main (){
    int numero1, numero2;
    printf("\nDigite o primeiro n�mero: ");    
    scanf("%d", &numero1);
    printf("\nDigite o segundo n�mero: ");    
    scanf("%d", &numero2);
    printf("\nSoma dos n�meros: %d ", somaNumeros(numero1, numero2));        
    system("pause");
    return(0);
}
int somaNumeros(int x, int y){    
     int resultado = x+y;
     return resultado;
}
