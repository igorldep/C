#include <stdio.h>
#include <stdlib.h>

/*4. Faça uma função que receba os endereços de memória de três números inteiros X, Y e Z e troque
os seus valores de forma que, ao retornar, o valor em X seja o menor, o valor em Y seja o
intermediário e o valor em Z seja o maior dos três. Faça também uma função main para testar a sua
função.*/

void ordenar (int *x, int *y, int *z);

int main (){
    int a, b, c;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int *x = &a, *y = &b, *z = &c;
    
    ordenar (&a, &b, &c);
    
    printf("\n\tO valor de x é: %d (menor).\n\tO valor de y é: %d. (intermediário)\n\tO valor de z é: %d. (maior)\n\n", *x, *y, *z );    
}

void ordenar (int *x, int *y, int *z){
    int *aux;
        
    if ( *x > *y ){
        if ( *x > *z ){
            *aux = *z;
            *z = *x; //x é o maior
            *x = *aux;
            if ( *y > *x )
                *x = *aux;
            else { // z > y
                *aux = *x;
                *x = *y;
                *y = *aux;
            }        
        }
        else { // x < z
            *aux = *x;
            *x = *y;
            *y = *aux;
        }
    }
    else { // x < y
        if ( *x > *z ){
            *aux = *z;
            *z = *y;
            *y = *x;
            *x = *aux;
        }
        else { // x < z
            //o menor é o x
            if ( y > z ){
                *aux = *y;
                *y = *z;
                *z = *aux;
            }
            // else ( y < z ) {z é o maior, y é o médio}
        }
    }
}
