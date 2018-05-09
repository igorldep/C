#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMDES 101 //Tamanho da descri��o
#define QUANTPRO 50  //Quantidade de Produtos

/**********************************************************************************************
 **********************************************************************************************
 **
 ** Nome: Igor Luciano de Paula e Leonardo Ribeiro | Turma: LABCOMP1 SELE.1 - G1
 ** Prof.: Geraldo Pereira de Souza | 1/2016 | CEFET-MG
 **
 ** Mod12_TAD_Struct - Roteiro: Exerc�cio N. 4 - Trabalho Final :
 **
 ** Voc� foi convidado a desenvolver o programa chamado �SISCAD: Sistema de Cadastro
 ** Simples� para cadastro de produtos. O sistema dever� manter para um produto: c�digo
 ** (num�rico inteiro e � campo chave), descri��o e pre�o. E poder� ser cadastrado at� 50
 ** produtos. Al�m disso voc� dever� dar op��o para o usu�rio executar as seguintes opera��es:
 ** Cadastrar um novo produto; Pesquisar um produto pelo c�digo; Calcular o pre�o m�dio de
 ** todos produtos cadastrados; Pesquisar o produto mais barato; Pesquisar o produto mais caro;
 ** Excluir um produto pelo c�digo; Imprimir todos produtos ordenados pelo c�digo;
 ** Imprimir todos os produtos ordenados pela descri��o;
 ** Obs: Um campo chave n�o poder� receber dois valores iguais.
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

  		printf("\n\t %s\n\t|\t\t\t\t\t\t\t  |\n\t|\t\t\t   SISCAD\t\t\t  |\n\t|%s|\n\n\t1) Cadastrar um novo produto;\n\t2) Pesquisar um produto pelo c�digo;\n\t3) Calcular o pre�o m�dio de todos produtos cadastrados;\n\t4) Pesquisar o produto mais barato;\n\t5) Pesquisar o produto mais caro;\n\t6) Excluir um produto pelo c�digo;\n\t7) Imprimir todos produtos ordenados pelo c�digo;\n\t8) Imprimir todos os produtos ordenados pela descri��o;\n\t9) Sair do programa\n\t%s\n\nDigite a op��o desejada: ", formatacao, formatacao, formatacao);
   		scanf("%d", &opcao);

     	switch ( opcao ){
  	    	case 1: //Cadastrar um produto
        	    printf("\nDigite o c�digo do produto: ");
        	    scanf("%d%*c", &novo_produto[i].codigo); //%d%*c para que o ENTER n�o v� para o gets

        	    for ( j = 0; j < count; j++ ){ //Campo chave: n�o aceita um c�digo j� inserido
        	        if ( novo_produto[i].codigo == novo_produto[j].codigo ){
       	                printf("Este c�digo j� foi inserido! Digite outro c�digo para o produto: ");
       	                scanf("%d%*c", &novo_produto[i].codigo);
       	                j = -1;
        	        }
        	    }

       		    printf("Digite a descri��o do produto: ");
        	    gets(novo_produto[i].descricao);
        	    printf("Digite o pre�o do produto: ");
        	    scanf("%f", &novo_produto[i].preco);

        	    printf("\nProduto adicionado:");
        	    imprime(novo_produto, i);

        	    count++;
        	    total++; //Vari�vel usada apenas para realizar a op��o 3 (m�dia)
       		    i++;
        	    break;

      		case 2: //Pesquisar um produto pelo c�digo
      		    if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue; //Sai do case e continua o c�digo
				}

        		printf("\nDigite o c�digo do produto: ");
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
        		    printf("\n\n\tNenhum Produto com esse c�digo foi encontrado!\n\n");

                break;

       		case 3: //Calcular o pre�o m�dio de todos produtos cadastrados
       			if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

       			for ( i = 0; i < count; i++ ){
        			soma = soma + novo_produto[i].preco;
        		}

				media = ((double) soma / total);

				printf("\n\tA m�dia dos produtos cadastrados �: %.2lf\n", media);

                soma = 0;
        	    break;

        	case 4: //Pesquisar o produto mais barato
        		i = 0;

        		if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        		do{ //Inicializa a vari�vel 'min' na primeira posi��o com um produto n�o exclu�do
        		    retorno = itemexcluido (novo_produto, i);

        		    if (retorno) //It�m n�o exclu�do
        		        min = novo_produto[i].preco;

        		    i++;
        		}while(!retorno);

        		for ( i = 0; i < count; i++ ){
        		    retorno = itemexcluido (novo_produto, i);
        		        if (retorno){ //It�m n�o exclu�do
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

        		do{ //An�logo a op��o 4
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

        	case 6: //Excluir um produto pelo c�digo
        	    if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        	    printf("\nDigite o c�digo do produto: ");
        		scanf("%d", &codigo);
        		aux = total;

        		for ( i = 0; i < count; i++ ){
        			if ( codigo == novo_produto[i].codigo ){
        				novo_produto[i].codigo = -1; //Posi��o para produtos exclu�dos
        				strcpy(novo_produto[i].descricao, "Produto Exclu�do!");
        				novo_produto[i].preco = -1;

        				printf("\n\n\tProduto Exclu�do!\n\n");

        				total--;
        			}
        		}

        		if (aux == total) //N�o entrou no if e n�o subtraiu o total => Produto n�o encontrado
        		    printf("\n\n\tNenhum Produto com esse c�digo foi encontrado!\n\n");

       		    break;

        	case 7: //Imprimir todos produtos ordenados pelo c�digo
        	    if ( count == 0 ){
                    nenhumproduto(formatacao);
                    continue;
				}

        	    for ( i = 0; i < (count - 1); i++ ){
                    for ( j = i + 1; j < count; j++ ){
                        if ( novo_produto[i].codigo > novo_produto[j].codigo )
        	                troca(novo_produto, i, j); //Muda a posi��o
                    }
        	    }
                printf("\nProdutos ordenados pelo c�digo:");
        	    for ( i = 0; i < count; i++ )
        	        imprime(novo_produto, i);

        	    break;

        	case 8: //Imprimir todos os produtos ordenados pela descri��o
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

                printf("\nProdutos ordenados pela descri��o:");
                for ( i = 0; i < count; i++ )
                    imprime(novo_produto, i);

        	    break;

            default:
                if (opcao != 9)
                    printf("\n\t\t Alternativa inv�lida. Tente outra op��o!\n\t%s\n", formatacao);

                break;
   		}
	}

	printf("\n\t %s\n\t|\t\t\t\t\t\t\t  |\n\t|\t\t       Sistema Encerrado!\t\t  |\n\t|%s|\a\n\n\n", formatacao, formatacao);

	system ("pause");
	return (0);

}

void imprime ( struct produto novo_produto [QUANTPRO], int i ){ //Imprime o c�digo, descri��o e pre�o dos produtos
    if (novo_produto[i].codigo != -1)
        printf("\n\n%d\n%s\n%.2f\n\n", novo_produto[i].codigo, novo_produto[i].descricao, novo_produto[i].preco);
}

int itemexcluido ( struct produto novo_produto [QUANTPRO], int i ){ //Testa se um produto esta exclu�do
    if (novo_produto[i].codigo == -1) //Produto exclu�do
        return (0);
    else
        return (1); //Produto n�o exclu�do
}

void troca (struct produto novo_produto [QUANTPRO], int i, int j){ //Troca a posi��o dos produtos no vetor 'novo_produto'
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
