#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Faça um programa modularizado utilizando registro que leia apenas uma conta bancária com as
seguintes informações: número da conta, nome do cliente e saldo. Apresente esses dados na tela.
*/

struct cliente{
    int conta;
    char nome[101];
    double saldo;
}; 

int main (){
    struct cliente c1;

    
    printf("Digite o número da conta: ");
    scanf("%d", &c1.conta);
    
    printf("Digite o nome do cliente: ");
    gets(c1.nome);
    
    printf("\n%s\n", c1.nome);
    
    printf("Digite o saldo da conta: ");
    scanf("%lf", &c1.saldo);
    
    //saída
    printf("\n\tNúmero da conta: %d\n\tNome do cliente: %s\n\tSaldo da conta: %.2lf\n\n", c1.conta, c1.nome, c1.saldo);

    system ("pause");
    return (0);    
}
