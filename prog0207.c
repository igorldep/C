#include <stdio.h>

int main ()
{
	float raio;
	double area, perimetro, pi = 3.1415927;

	printf("Digite o valor do raio: ");
	scanf("%f", &raio);

	area = pi * raio * raio;
	perimetro = 2 * pi * raio;

	printf("\nArea = %lf\nPerimetro = %lf\n", area, perimetro);

return 0;
}
