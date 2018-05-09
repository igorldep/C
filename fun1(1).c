#include <stdio.h>
#include <stdlib.h>

void mes ( int x );

int main ()
{
    int num;

    printf("Digite um número de 1 a 12: ");
    scanf("%d", &num);

    mes(num);

    system ("pause");
return (0);
}

void mes ( int x )
{
    switch ( x )
    {
        case 1:
        {
            printf("\nO número digitado corresponde ao mês de JANEIRO!!\n");
            break;
        }
        case 2:
        {
            printf("\nO número digitado corresponde ao mês de FEVEREIRO!!\n");
            break;
        }
        case 3:
        {
            printf("\nO número digitado corresponde ao mês de MARÇO!!\n");
            break;
        }
        case 4:
        {
            printf("\nO número digitado corresponde ao mês de ABRIL!!\n");
            break;
        }
        case 5:
        {
            printf("\nO número digitado corresponde ao mês de MAIO!!\n");
            break;
        }
        case 6:
        {
            printf("\nO número digitado corresponde ao mês de JUNHO!!\n");
            break;
        }
        case 7:
        {
            printf("\nO número digitado corresponde ao mês de JULHO!!\n");
            break;
        }
        case 8:
        {
            printf("\nO número digitado corresponde ao mês de AGOSTO!!\n");
            break;
        }
        case 9:
        {
            printf("\nO número digitado corresponde ao mês de SETEMBRO!!\n");
            break;
        }
        case 10:
        {
            printf("\nO número digitado corresponde ao mês de OUTUBRO!!\n");
            break;
        }
        case 11:
        {
            printf("\nO número digitado corresponde ao mês de NOVEMBRO!!\n");
            break;
        }
        case 12:
        {
            printf("\nO número digitado corresponde ao mês de DEZEMBRO!!\n");
            break;
        }
        default
        {
            printf("\nErro: O número digitado é invalido!!!\n\n");
            break;
        }
    }

}
