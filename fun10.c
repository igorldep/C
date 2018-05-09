#include <stdio.h>
#include <stdlib.h>

float altura(float g, float v, float tempo);
float velocidade(float g, float v, float tempo);
void imprime(float altura, float velocidade, float t);

int main ()
{
    /* g ­= aceleração gravitacional; v =­ velocidade inicial;
     * h = altura que a bola atingirá; vf = velocidade final da bola;
     * tempo ­= tempo para o qual a altura é desejada. */

    float g, v, tempo, h, vf;

    printf("Digite o valor da aceleração da gravidade: "); scanf("%f", &g);
    printf("Digite o valor da velocidade inicial: "); scanf("%f", &v);
    printf("Digite o valor do tempo em que se deseja obter as informações: "); scanf("%f", &tempo);

    h = altura (g, v, tempo);
    vf =  velocidade (g, v, tempo);

    imprime ( h, vf, tempo );

    system("pause");
return (0);
}

//Retorna a altura que a bola atinge quando sujeita à aceleração gravitacional constante.
float altura(float g, float v, float tempo)
{
    float h;

    h = ( ( v * tempo ) - ( g * tempo * tempo * 0.5 ) );

    return (h);
}

//Retorna   a   velocidade   que   a   bola   atinge   quando   sujeita   à   aceleração gravitacional constante.
float velocidade(float g, float v, float tempo)
{
    float vf;
    vf = ( v - ( g * tempo) );
    return (vf);
}

// Imprime na saída ­padrão a altura e a velocidade calculados
void imprime(float altura, float velocidade, float t)
{
    printf("A velocidade da bola no instante %.3f é %.3f e a altura é %.3f", t, velocidade, altura);
}
