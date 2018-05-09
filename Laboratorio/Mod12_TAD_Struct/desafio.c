#include <stdio.h>
#include <stdlib.h>
#define a 5
#define n 3

struct Aluno
{
    double codigo;
    double notas[3];
    double media;
};

int main()
{
    int i, j;
    double media, mediatotal = 0;
    struct Aluno turma[5];
        
    for ( i = 0; i < a; i++){ //Alunos
        for ( j = 0; j < n; j++ ){ //Notas         
            printf("Digite a %d nota do Aluno %d: ", ( j + 1 ), ( i + 1 ) );
            scanf("%lf", &turma[i].notas[j]);           
        }
        
        turma[i].media = (turma[i].notas[0]+turma[i].notas[1]+turma[i].notas[2])/3;
        printf("\nmedia do aluno %d: %.2lf\n\n", ( i + 1 ), turma[i].media);
        mediatotal = mediatotal + turma[i].media;
    }
    
    printf("A média total da Turma é: %.2lf.\n\n\n", ( mediatotal / a ) );
    
    system ("pause");
    return (0);
}
