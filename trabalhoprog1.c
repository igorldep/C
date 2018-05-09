#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Você foi convidado a desenvolver o programa chamado “SISCAD: Sistema de Cadastro
Simples” para cadastro de produtos. O sistema deverá manter para um produto: código
(numérico inteiro e é campo chave), descrição e preço. E poderá ser cadastrado até 50
produtos. Além disso você deverá dar opção para o usuário executar as seguintes operações:

Cadastrar um novo produto;
Pesquisar um produto pelo código;
Calcular o preço médio de todos produtos cadastrados;
Pesquisar o produto mais barato;
Pesquisar o produto mais caro;
Excluir um produto pelo código;
Imprimir todos produtos ordenados pelo código;
Imprimir todos os produtos ordenados pela descrição;
Obs: Um campo chave não poderá receber dois valores iguais. Exemplo de campos chave:
1) CPF no sistema da receita federal;
2) Placa de veículo no sistema do DETRAN;
3) Matrícula de aluno no sistema acadêmico;
*/

struct produto{
    int codigo;
    char descricao [101];
    float preco;
};


int main(){
    struct produto novo_produto [50];
    int opcao, i, codigo, count;
    float min, max;
    double soma, media;
    i = count = soma = 0;
  
	while ( opcao != 9 ){
    
  		printf("\n\t1) Cadastrar um novo produto;\n\t2) Pesquisar um produto pelo código;\n\t3) Calcular o preço médio de todos produtos cadastrados;\n\t4) Pesquisar o produto mais barato;\n\t5) Pesquisar o produto mais caro;\n\t6) Excluir um produto pelo código;\n\t7) Imprimir todos produtos ordenados pelo código;\n\t8) Imprimir todos os produtos ordenados pela descrição;\n\t9) Sair do programa\n\nDigite a opção desejada: ");
   		scanf("%d", &opcao);
    
     	switch ( opcao ){
  	    	case 1: //cadastrar um produto
        	    printf("Digite o código do produto: ");
        	    scanf("%d%*c", &novo_produto[i].codigo); //%d%*c para que o ENTER não vá para o gets 
       		    printf("Digite a descrição do produto: ");
        	    gets(novo_produto[i].descricao);
        	    printf("Digite o preço do produto: ");
        	    scanf("%f", &novo_produto[i].preco);
            
        	    printf("\n\n%d\n%s\n%.2f\n\n", novo_produto[i].codigo, novo_produto[i].descricao, novo_produto[i].preco);
        	    count++;
       		    i++;
        	    break;
            
      		case 2:
        		printf("Digite o código do produto: ");
        		scanf("%d%*c", &codigo);
        		
        		for ( i = 0; i < count; i++ ){
        			if ( codigo == novo_produto[i].codigo ){
        				printf("\n\t%d\n\t%s\n\t%.2f\n", novo_produto[i].codigo, novo_produto[i].descricao, novo_produto[i].preco);
        			}
        		}
            
        	    break;
            
       		case 3:
       			for ( i = 0; i < count; i++ ){
        			soma = soma + novo_produto[i].preco;
        		}
        		
				media = ((double) soma / count);
        		
        		printf("\n\tA média dos produtos cadastrados é: %.2lf\n", media);
            
        	    break;
            
        	case 4:
        		min = novo_produto[0].preco;
        		
        		for ( i = 1; i < count; i++ ){
        			if ( min > novo_produto[i].preco ){
        				min = novo_produto[i].preco;
        			}
        		}
        		
        		for ( i = 0; i < count; i++ ){
        			if ( min == novo_produto[i].preco ){
        				printf("\n\t%d\n\t%s\n\t%.2f\n\n", novo_produto[i].codigo, novo_produto[i].descricao, novo_produto[i].preco);
        			}
        		}
        		            
        	    break;
            
        	case 5:
        		max = novo_produto[0].preco;
        		
        		for ( i = 1; i < count; i++ ){
        			if ( max < novo_produto[i].preco ){
        				max = novo_produto[i].preco;
        			}
        		}
        		
        		for ( i = 0; i < count; i++ ){
        			if ( max == novo_produto[i].preco ){
        				printf("\n\t%d\n\t%s\n\t%.2f\n\n", novo_produto[i].codigo, novo_produto[i].descricao, novo_produto[i].preco);
        			}
        		}
            
        	    break;
            
        	case 6:
            
       		    break;
            
        	case 7:
            
        	    break;
            
        	case 8:
        
        	    break;
        
   		}
	}
}
