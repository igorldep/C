#include <stdio.h>

int main()
{
    float n 
    rand() = n;

return (0);
}


int Digitos(float N){
   int cont;
   cont = 1;
   while(N >= 10){
      N = N / 10;
      cont = cont + 1;
   }
   return cont;
}


=> A função Digitos, recebe uma variável flutuante 'N' como parâmetro e retorna um valor inteiro.
A mesma inicializa uma variável inteira 'cont' como contador e a atribuiu o valor '1'.
Após isso, entra em loop while que irá realizar comandos enquanto a variável flutuante 'N' for maior ou igual a 10.
Dentro do loop, o programa atribui a 'N' um valor de N/10, e adiciona uma unidade ao contador todas as vezes que o loop for executado.
Quando 'N' for menor que 10, a função retorna o valor do contador. Logo, a função serve para retornar quantas casas decimais foram decridas de N.
