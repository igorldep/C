#include <stdio.h>

int main ()
{
	//(usando a notação científica xEy) Em c: ponto = virgula
	float quilos = 1.0E3; //uma tonelada são 1000 quilos
	double gramas = 1.0e3; //uma tonelada são 1 000 000
	float n_toneladas;
	//super+w
	printf("Qual o numero de toneladas? "); scanf("%f", &n_toneladas);
	printf("O numero de toneladas em quilos é: %f = %e \n", n_toneladas * quilos, n_toneladas * quilos);
	printf("O numero de toneladas em gramas é: %f = %E \n\n", n_toneladas * gramas, n_toneladas * gramas);

/* " %e " ou " %E " são as flags para mostrar a notação científica */

return 0;
}
