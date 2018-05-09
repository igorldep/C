#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, acm;
    cont = acm = 0;
    float res;

    while(num != -1){
        printf("\nDigite um inteiro positivo: ");
        scanf("%d", &num);

        acm = acm + num;
        cont++;
    }

    res = ( acm / cont );

    printf("\nA média dos números digitados é de: %.2f.\n\n", res);

    system("pause");
return (0);
}
