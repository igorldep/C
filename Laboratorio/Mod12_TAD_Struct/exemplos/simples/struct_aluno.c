#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    int codigo;
    double notas[3];
    double media;
};

int main()
{
    struct Aluno jose;

    jose.codigo=1;
    jose.notas[0]=7.5;
    jose.notas[1]=8;
    jose.notas[2]=5;
    jose.media = (jose.notas[0]+jose.notas[1]+jose.notas[2])/3;

    printf("\nMatrícula: %d", jose.codigo);
    printf("\nMédia: %.2lf", jose.media);

    return 0;
}
