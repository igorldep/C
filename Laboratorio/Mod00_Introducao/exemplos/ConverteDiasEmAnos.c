#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int Dias; /* Declaracao de Variaveis */
    float Anos;
    printf ("Entre com o número de dias: "); /* Entrada de Dados
    */
    scanf ("%d",&Dias);
    Anos=Dias/365.25; /* Conversao Dias->Anos */
    printf ("\n\n%d dias equivalem a %f anos.\n",Dias,Anos);
    printf ("\n\n%d dias equivalem a %8.2f anos.\n",Dias,Anos);
    system("pause");
    return(0);
}
