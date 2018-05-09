#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMDES 101 //Tamanho da descrição
#define QUANTPRO 50  //Quantidade de Produtos

/**********************************************************************************************
 **********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula e Leonardo Ribeiro | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod12_TAD_Struct - Roteiro: Exercício N. 4 - Trabalho Final :
 **
 ** Você foi convidado a desenvolver o programa chamado “SISCAD: Sistema de Cadastro
 ** Simples” para cadastro de produtos. O sistema deverá manter para um produto: código
 ** (numérico inteiro e é campo chave), descrição e preço. E poderá ser cadastrado até 50
 ** produtos. Além disso você deverá dar opção para o usuário executar as seguintes operações:
 ** Cadastrar um novo produto; Pesquisar um produto pelo código; Calcular o preço médio de
 ** todos produtos cadastrados; Pesquisar o produto mais barato; Pesquisar o produto mais caro;
 ** Excluir um produto pelo código; Imprimir todos produtos ordenados pelo código;
 ** Imprimir todos os produtos ordenados pela descrição;
 ** Obs: Um campo chave não poderá receber dois valores iguais.
 **
 **********************************************************************************************
 *********************************************************************************************/

struct produto{
    int codigo;
    char descricao [TAMDES];
    float preco;
};

void imprime ( struct produto novo_produto [QUANTPRO], int i);
int itemexcluido ( struct produto novo_produto [QUANTPRO], int i );
void troca (struct produto novo_produto [QUANTPRO], int i, int j);
void nenhumproduto(char formatacao[57]);

int main(){
    struct produto novo_produto [QUANTPRO];
    int opcao, i, j, codigo, count, aux, retorno, res, total;
    float min, max;
    double soma, media;
    char formatacao[] = "_________________________________________________________";
    i = count = soma = total = 0;

    printf("\a\n\n\t      Bem-vindo ao SISCAD: Sistema de Cadastro Simples\n");

	while ( opcao != 9 ){ //9 sai do programa

  		printf("\n\t %s\n\t|\t\t\t\t\t\t\t  |\n\t|\t\t\t   SISCAD\t\t\t  |\n\t|%s|\n\n\t1) Cadastrar um novo produto;\n\t2) Pesquisar um produto pelo código;\n\t3) Calcular o preço médio de todos produtos cadastrados;\n\t4) Pesquisar o produto mais barato;\n\t5) Pesquisar o produto mais caro;\n\t6) Excluir um produto pelo código;\n\t7) Imprimir todos produtos ordenados pelo código;\n\t8) Imprimir todos os produtos ordenados pela descrição;\n\t9) Sair do programa\n\t%s\n\nDigite a opção desejada: ", formatacao, formatacao, formatacao);
   		scanf("%d", &opcao);

     	switch ( opcao ){
  	    	case 1: //Cadastrar um produto
        	    printf("\nDigite o código do produto: ");
        	    scanf("%d%*c", &novo_produto[i].codigo); //%d%*c para que o ENTER não vá para o gets

        	    for ( j = 0; j < count; j++ ){ //Campo chave: não aceita um código já inserido
        	        if ( novo_produto[i].codigo == novo_produto[j].codigo ){
       	                printf("Este código já foi inserido! Digite outro código para o produto: ");
       	                scanf("%d%*c", &novo_produto[i].codigo);
       	                j = -1;
        	        }
        	    }

       		    printf("Digite a descrição do produto: ");
        	    gets(novo_produto[i].descricao);
        	    printf("Digite o preço do produto: ");
        	    scanf("%f", &novo_produto[i].preco);

        	    printf("\nProduto adicionado:");
        	    imprime(novo_produto, i);

        	    count++;
        	    total++; //Variável usada apenas para realizar a opção 3 (média)
       		    i++;
        	    break;

      		case 2: //Pesquisar um produto pelo código
      		    if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue; //Sai do case e continua o código
				}

        		printf("\nDigite o código do produto: ");
        		scanf("%d%*c", &codigo);
        		aux = 0;

        		for ( i = 0; i < count; i++ ){
        			if ( codigo == novo_produto[i].codigo ){
                        printf("\nProduto Encontrado:");
        				imprime(novo_produto, i);
        				aux++;
        		    }
        		}

        		if ( ( aux == 0 ) || ( novo_produto[i].codigo == -1 ) )
        		    printf("\n\n\tNenhum Produto com esse código foi encontrado!\n\n");

                break;

       		case 3: //Calcular o preço médio de todos produtos cadastrados
       			if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

       			for ( i = 0; i < count; i++ ){
        			soma = soma + novo_produto[i].preco;
        		}

				media = ((double) soma / total);

				printf("\n\tA média dos produtos cadastrados é: %.2lf\n", media);

                soma = 0;
        	    break;

        	case 4: //Pesquisar o produto mais barato
        		i = 0;

        		if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        		do{ //Inicializa a variável 'min' na primeira posição com um produto não excluído
        		    retorno = itemexcluido (novo_produto, i);

        		    if (retorno) //Itém não excluído
        		        min = novo_produto[i].preco;

        		    i++;
        		}while(!retorno);

        		for ( i = 0; i < count; i++ ){
        		    retorno = itemexcluido (novo_produto, i);
        		        if (retorno){ //Itém não excluído
        		            if ( min > novo_produto[i].preco )
        			            min = novo_produto[i].preco;
        			    }
        		    }

                printf("\nProduto mais barato:");
        		for ( i = 0; i < count; i++ ){
        		    if ( min == novo_produto[i].preco )
        		        imprime(novo_produto, i);
        		}


        	    break;

        	case 5: //Pesquisar o produto mais caro
        		i = 0;

        		if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        		do{ //Análogo a opção 4
        		    retorno = itemexcluido (novo_produto, i);

        		    if (retorno)
        		        max = novo_produto[i].preco;

        		    i++;
        		}while(!retorno);

        		for ( i = 0; i < count; i++ ){
        		    retorno = itemexcluido (novo_produto, i);
        		        if (retorno){
        		            if ( max < novo_produto[i].preco )
        			            max = novo_produto[i].preco;
        			    }
        		    }

                printf("\nProduto mais caro:");
        		for ( i = 0; i < count; i++ ){
        		    if ( max == novo_produto[i].preco )
        		        imprime(novo_produto, i);
        		}

        	    break;

        	case 6: //Excluir um produto pelo código
        	    if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        	    printf("\nDigite o código do produto: ");
        		scanf("%d", &codigo);
        		aux = total;

        		for ( i = 0; i < count; i++ ){
        			if ( codigo == novo_produto[i].codigo ){
        				novo_produto[i].codigo = -1; //Posição para produtos excluídos
        				strcpy(novo_produto[i].descricao, "Produto Excluído!");
        				novo_produto[i].preco = -1;

        				printf("\n\n\tProduto Excluído!\n\n");

        				total--;
        			}
        		}

        		if (aux == total) //Não entrou no if e não subtraiu o total => Produto não encontrado
        		    printf("\n\n\tNenhum Produto com esse código foi encontrado!\n\n");

       		    break;

        	case 7: //Imprimir todos produtos ordenados pelo código
        	    if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        	    for ( i = 0; i < (count - 1); i++ ){
                    for ( j = i + 1; j < count; j++ ){
                        if ( novo_produto[i].codigo > novo_produto[j].codigo )
        	                troca(novo_produto, i, j); //Muda a posição
                    }
        	    }
                printf("\nProdutos ordenados pelo código:");
        	    for ( i = 0; i < count; i++ )
        	        imprime(novo_produto, i);

        	    break;

        	case 8: //Imprimir todos os produtos ordenados pela descrição
        	    if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        	    for ( i = 0; i < (count - 1); i++ ){
                    for ( j = i + 1; j < count; j++ ){

                        res = strcmp (novo_produto[i].descricao, novo_produto[j].descricao); //Compara as strings

                        if (res > 0)
                            troca(novo_produto, i, j);
                    }
                }

                printf("\nProdutos ordenados pela descrição:");
                for ( i = 0; i < count; i++ )
                    imprime(novo_produto, i);

        	    break;

            default:
                if (opcao != 9)
                    printf("\n\t\t Alternativa inválida. Tente outra opção!\n\t%s\n", formatacao);

                break;
   		}
	}

	printf("\n\t %s\n\t|\t\t\t\t\t\t\t  |\n\t|\t\t       Sistema Encerrado!\t\t  |\n\t|%s|\a\n\n\n", formatacao, formatacao);

	system ("pause");
	return (0);

}

void imprime ( struct produto novo_produto [QUANTPRO], int i ){ //Imprime o código, descrição e preço dos produtos
    if (novo_produto[i].codigo != -1)
        printf("\n\n%d\n%s\n%.2f\n\n", novo_produto[i].codigo, novo_produto[i].descricao, novo_produto[i].preco);
}

int itemexcluido ( struct produto novo_produto [QUANTPRO], int i ){ //Testa se um produto esta excluído
    if (novo_produto[i].codigo == -1) //Produto excluído
        return (0);
    else
        return (1); //Produto não excluído
}

void troca (struct produto novo_produto [QUANTPRO], int i, int j){ //Troca a posição dos produtos no vetor 'novo_produto'
    int aux_codigo;
    char aux_descricao [TAMDES];
    float aux_preco;

    aux_codigo = novo_produto[i].codigo;
    strcpy(aux_descricao, novo_produto[i].descricao);
    aux_preco = novo_produto[i].preco;
    novo_produto[i].codigo = novo_produto[j].codigo;
    strcpy(novo_produto[i].descricao, novo_produto[j].descricao);
    novo_produto[i].preco = novo_produto[j].preco;
    novo_produto[j].codigo = aux_codigo;
    strcpy(novo_produto[j].descricao, aux_descricao);
    novo_produto[j].preco = aux_preco;
}

void nenhumproduto(char formatacao[57]){ //Imprime uma mensagem caso nenhum produto esteja cadastrado
    printf("\n\n\t\t\t  Nenhum produto cadastrado!\n\t %s\n\n", formatacao);
}
