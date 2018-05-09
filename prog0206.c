#include <stdio.h>

int main()
{
	short int idade;
	int montante;
	long int n_conta;
	
	printf("Qual sua idade? "); scanf("%hd", &idade); // Para s'h'ort usa-se a flag h
	printf("Qual o montante a depositar: "); scanf("%d", &montante);
	printf("Qual o numero da conta: "); scanf("%ld", &n_conta);
	
	printf("Uma pessoa de %hd anos, depositou R$%d,00 na conta %ld\n", idade, montante, n_conta);
	return 0;
}
