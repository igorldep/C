#include <stdio.h>
#include <stdlib.h>

int incrementaX(int *x) {
	*x =  *x + 10;
	return *x;
}
int main(){
	int x = 5;
	printf("\nx=%d", x); // Qual valor de x?
    printf("\nx=%d",(incrementaX(&x)));
    printf("\nx=%d", x); // Qual valor de x? 
    printf("\n\n\n");
    system("pause");          
}
