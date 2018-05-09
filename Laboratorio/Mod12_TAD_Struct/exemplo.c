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
    int i;
    struct Aluno jose;
    jose.codigo=1;
    
    for ( i = 0; i < 3; i++ ){
        printf("Digite a %d nota do Aluno %d: ", ( i + 1 ), jose.codigo );
        scanf("%lf", &jose.notas[i]);
    }
    
    jose.media = (jose.notas[0]+jose.notas[1]+jose.notas[2])/3;

    printf("\nMatrícula: %d.", jose.codigo);
    printf("\nMédia: %.2lf.\n\n", jose.media);

    system ("pause");
    return (0);
}
