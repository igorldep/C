#include <stdio.h>
#include <stdlib.h>

int main (){    
    int contador=0;
    double carga, acumulador;

    printf ("\nExecutar 5 viagens ");    
    
    do{    
       printf ("\nInforme a carga  da viagem %d :", (contador+1));           
        // O formatador para int � %d
        // O formatador para flout � %f         
        // O formatador para double � %lf                      
       scanf("%lf", &carga);
       
       contador = contador + 1;
       acumulador = acumulador + carga;
       
    }while(contador<5);   
    
    printf ("\nFim de expediente. ");
    printf ("\nN�mero de viagens : &d ", contador);  
             
    printf ("\nCarga total transportada : %6.2lf ", acumulador); 
    // O formatador para int � %d
    // O formatador para flout � %f         
    // O formatador para double � %lf          
    // Para imprimir um double formatado � %6.2lf (seis casas inteiras e duas decimais)
    printf ("\nCarga m�dia por viagem : %6.2lf ", acumulador/contador);           
    
    system("pause");
    return 0;
}
     
