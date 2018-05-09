#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod02_If_Else - Roteiro: Exercício N. 2:
 *Crie e compile o código fonte abaixo:	a) Nome para o programa: Mod02_Exercicio2.c;
 *b) Faça a identação do código conforme aulas de AED; c) Compile e execute o código fonte;
 *d) Inclusa um system(“pause”) no código fonte para parar a tela. Obs: para usar a função 
 *system(“pause”) você deve incluir a biblioteca stdlib: #include <stdlib.h>
 *e) O que o programa faz?
 */

int main ()
{
    int idade;

    printf ("Digite sua idade: ");
    scanf ("%d",&idade);

    if ( ( idade>=16 ) && ( idade<18 ) )
    {
        printf ("\n\nVocê pode votar se quiser!!!");
    }
    else if ( ( idade>=18 ) && ( idade<60 ) )
    {
        printf ("\n\nVocê deve votar. Senão deve justificar sua ausência nas eleições!");
    }
    else
    {
        printf ("\n\nVocê vota se quiser!");
    }

    system ("pause");
return(0);
}

/*O programa pede um numero para o usuário e o armazena na viriável inteira "idade". 
 *Posteriormente o compara com algumas expressões. Se o número for maior ou igual que 16 e, ao mesmo tempo, menor que 18,
 *ele imprime na tela "Você pode votar se quiser!!!". Mas se o número for maior ou igual a 18 e, ao mesmo tempo, menor que 60,
 *o programa imprime na ela "Você deve votar. Senão deve justificar sua ausência nas eleições!".
 *Senão(número menor que 16 ou maior que 60), o programa imprime na tela "Você vota se quiser!".
 */
