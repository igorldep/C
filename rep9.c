#include <stdio.h>
#include <stdlib.h>
 
int main ()
{ 
    int x = 1, n;

    printf("Informe a quantidade de termos: "); 
    scanf("%d", &n); 

    while ( x <= n )
    {
        printf("%d\n", (x * x) ); 
        x++; 
    } 

    system("pause");
return 0; 
}

