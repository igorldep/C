#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/********************************************************************************************
 ********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod08_string - Roteiro: Exerc�cio N. 4:
 ** Fa�a um programa que solicite ao usu�rio para digitar uma frase. Logo em seguida o programa
 ** deve imprimir: a) Para cada vogal (�a�, �e�, �i�, �o� e �u�) quantas vezes cada vogal
 ** aparece na frase; b) O n�mero total de vogais; c) O n�mero total de d�gitos (0,1, .., 9):
 ** pode haver repeti��o nesse caso ser� computado quantas vezes o d�gito aparece;
 ** d) O n�mero total da letras; e) Quantos caracteres est�o em mai�sculas;
 ** f) Quantos caracteres est�o em min�sculas;
 **
 *******************************************************************************************
 *******************************************************************************************/

int main (){
    char frase [201];
    int count_a, count_e, count_i, count_o, count_u, totalvogais;
    int digito1, digito2, digito3, digito4, digito5, digito6, digito7, digito8, digito9, digito0, digit;
    int alpha, uper, lower, i;

    count_a = count_e = count_i = count_o = count_u = digito1 = digito2 = digito3 = digito4 = digito5 = digito6 = digito7 = digito8 = digito9 = digito0 = digit = alpha = uper = lower = 0;

    printf("\n\tDigite uma frase: ");
    gets(frase);

    for ( i = 0; i < strlen (frase); i++ ){
        if ( frase [i] == 'a' )
            count_a++;
        else if ( frase [i] == 'e' )
            count_e++;
        else if ( frase [i] == 'i' )
            count_i++;
        else if ( frase [i] == 'o' )
            count_o++;
        else if ( frase [i] == 'u' )
            count_u++;

        if ( isdigit(frase[i]) ){
            digit++;//num. total de d�gitos

            if ( frase [i] == '1' )
                digito1++;
            else if ( frase [i] == '2' )
                digito2++;
            else if ( frase [i] == '3' )
                digito3++;
            else if ( frase [i] == '4' )
                digito4++;
            else if ( frase [i] == '5' )
                digito5++;
            else if ( frase [i] == '6' )
                digito6++;
            else if ( frase [i] == '7' )
                digito7++;
            else if ( frase [i] == '8' )
                digito8++;
            else if ( frase [i] == '9' )
                digito9++;
            else if ( frase [i] == '0' )
                digito0++;
        }

        if ( isalpha(frase [i]) ){
            alpha++; //num. total de letras

            if ( isupper(frase[i]) ) //mai�sculas
                uper++;
            if ( islower(frase[i]) ) //min�sculas
                lower++;
        }
    }

    totalvogais = ( count_a + count_e + count_i + count_o + count_u );

    printf("\n\tA vogal 'a' aparece na frase %d vezes.\n\tA vogal 'e' aparece na frase %d vezes.\n\tA vogal 'i' aparece na frase %d vezes.\n\tA vogal 'o' aparece na frase %d vezes.\n\tA vogal 'u' aparece na frase %d vezes.\n\tO total de vogais �: %d\n", count_a, count_e, count_i, count_o, count_u, totalvogais);

    if ( digito1 > 0 )
        printf("\n\tO digito '1' aparece na frase %d vezes.", digito1);
    if ( digito2 > 0 )
        printf("\n\tO digito '2' aparece na frase %d vezes.", digito2);
    if ( digito3 > 0 )
        printf("\n\tO digito '3' aparece na frase %d vezes.", digito3);
    if ( digito4 > 0 )
        printf("\n\tO digito '4' aparece na frase %d vezes.", digito4);
    if ( digito5 > 0 )
        printf("\n\tO digito '5' aparece na frase %d vezes.", digito5);
    if ( digito6 > 0 )
        printf("\n\tO digito '6' aparece na frase %d vezes.", digito6);
    if ( digito7 > 0 )
        printf("\n\tO digito '7' aparece na frase %d vezes.", digito7);
    if ( digito8 > 0 )
        printf("\n\tO digito '8' aparece na frase %d vezes.", digito8);
    if ( digito9 > 0 )
        printf("\n\tO digito '9' aparece na frase %d vezes.", digito9);
    if ( digito0 > 0 )
        printf("\n\tO digito '0' aparece na frase %d vezes.", digito0);
    printf("\n\tO n�mero total de d�gitos � %d.\n", digit);

    printf("\n\tO n�mero total de letras � %d.\n\tO n�mero de letras mai�sculas � %d.\n\tO n�mero de letras min�sculas � %d.\n\n", alpha, uper, lower);
}
