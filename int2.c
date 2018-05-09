#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float litros, distancia, tempo, vel;

    printf("Qual a velocidade média(em km/h) e o tempo gasto na viagem(em horas)?");
    scanf("%f %f", &vel, &tempo);

    distancia = ( tempo * vel );
    litros = ( distancia / 16 );

    printf("\nA distância percorrida é de %.2f km.\nForam gastos %.2f litros de combustível.\n", distancia, litros);

    system("pause");
return (0);
}
