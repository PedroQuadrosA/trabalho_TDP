#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Função Float declarada
float altera_valor (float);
void login(void);
void texto_login (void);
void administrador (void);


void main (){
	login ();
}

void login (){

//Definição de struct para armazenar dados no cadastro.   
struct cadastroo{
    char nome_cadastro[10];
	char senha_cadastro[10];
	int cpf;
};
    struct cadastroo cliente;
    malloc(sizeof(cliente)); //Alocaco dinamica para a struct cliente.
	char username[10];
	char password [10];
	int resposta, res;
	int produto;
	
	texto_login();
	printf("  [1] - Cliente\n");
	printf("  [2] - Administrador\n");
	printf("\n Selecione a opcao desejada: ");
	scanf ("%d", &resposta);
	
	
	switch(resposta){
	
		case 1:
			texto_login();
			printf("  [1] - Login\n");
			printf("  [2] - Cadastrar\n");
			printf("\n Selecione a opcao desejada: ");
			scanf("%d", &res);
			
			
			while (res != 1 && res != 2){
				texto_login();
				printf("  [1] - Login\n");
				printf("  [2] - Cadastrar\n");
				printf("\n Selecione a opcao desejada: ");
				scanf("%d", &res);
				
		}

			if (res == 1){
				texto_login();
				printf("   Username: ");
				scanf ("%s", &username);
				printf("   Senha: ");
				scanf ("%s", &password);
	
				if (strcmp(username, "abc") == 0){
					if (strcmp(password, "123")== 0){
					return compra_cliente();
					} else {
						printf ("\n Senha Invalida!");
					}
		} else {
			printf ("\n Username Invalido!");
		}
		getch();
		} if (res == 2) {
			system ("cls");
			printf("\nCADASTRO\n");
			printf("\nDigite seu primeiro nome para cadastro: ");
			scanf("%s", cliente.nome_cadastro);
			printf("Digite seu cpf: ");
			scanf("%d", &cliente.cpf);
			printf("Digite sua senha: ");
			scanf("%s", &cliente.senha_cadastro);
			
			printf("\n---- CLIENTE CADASTRADO E LOGADO ----\n");
			return compra_cliente();
			
			
		}
		
		break;
		
		case 2:
			texto_login();
			printf("          ADMINISTRADOR           \n\n");
				printf("   Username: ");
				scanf ("%s", &username);
				printf("   Senha: ");
				scanf ("%s", &password);
	
		if (strcmp(username, "abc") == 0){
			if (strcmp(password, "123")== 0){
				administrador();
			} else {
				printf ("\n Senha Invalida!");
			}
		} else {
		printf ("\n Username Invalido!");
		}
	
		getch();
		break;
		
		default:
			main ();
			break;
	}
}

void texto_login (){
	printf("---- TECNICAS DE PROGRAMACAO ----\n");
	printf("             MERCADO             \n\n");
};

void administrador (){
	int cod_iten;
	//Definição dos valores iniciais dos produtos
	int quant_arroz = 50;
	float valor_arroz = 4.99;
	int quant_feijao = 60;
	float valor_feijao = 3.99;
	int quant_refri = 100;
	float valor_refri = 6.99;
	
	int cmdo;
	//Loop para o Menu
	do {
	menu_itens(&cod_iten); //Chamada da função do Menu
		switch (cod_iten){ //Selecionar a opção do Menu
			case 01: //ARROZ
				do {
				system ("cls"); //Limpa a tela
				int cod_altera;
				texto_login();
				printf (" ---- MERCADO ADMINISTRADOR ---- \n");
				printf (" - ARROZ BRANCO \n");
				printf (" - Quantidade: %d\n", quant_arroz);
				printf (" - Valor: R$%0.2f\n", valor_arroz);
			
				printf ("\n\n [1] - ATUALIZAR --- \n");
				printf (" [2] - RETORNAR --- \n");
				scanf ("%d", &cmdo); //Lê uma opção entre Atualizar ou Retornar
			
				if (cmdo == 1){
					printf ("\n\n [1] - Alterar Quantidade\n");
					printf (" [2] - Alterar Valor\n");
					scanf ("%d", &cod_altera);
					if (cod_altera == 1){
					quant_arroz = altera_quantidade (quant_arroz); //Chamada da Função de Alterar Quantidade
					}else {
					valor_arroz = altera_valor (valor_arroz); //Chamada da Função de Alterar Valor
					}
				}
			}while (cmdo == 1);
				break;
			case 02: //FEIJÃO
				do {
				system ("cls"); //Limpa a tela
				int cod_altera;
				texto_login();
				printf (" ---- MERCADO ADMINISTRADOR ---- \n");
				printf (" - FEIJAO PRETO \n");
				printf (" - Quantidade: %d\n", quant_feijao);
				printf (" - Valor: R$%0.2f\n", valor_feijao);
			
				printf ("\n\n [1] - ATUALIZAR --- \n");
				printf (" [2] - RETORNAR --- \n");
				scanf ("%d", &cmdo); //Lê uma opção entre Atualizar ou Retornar
			
				if (cmdo == 1){
					printf ("\n\n [1] - Alterar Quantidade\n"); 
					printf (" [2] - Alterar Valor\n");
					scanf ("%d", &cod_altera);
					if (cod_altera == 1){
					quant_feijao = altera_quantidade (quant_feijao); //Chamada da Função de Alterar Quantidade
					}else {
					valor_feijao = altera_valor (valor_feijao); //Chamada da Função de Alterar Valor
					}
				}

			}while (cmdo == 1);
				break;
			case 03: //REFRIGERANTE
				do {
				system ("cls"); //Limpa a tela
				int cod_altera;
			 	texto_login();
				printf (" ---- MERCADO ADMINISTRADOR ---- \n");
				printf (" - REFRIGERANTE \n");
				printf (" - Quantidade: %d\n", quant_refri);
				printf (" - Valor: R$%0.2f\n", valor_refri);
		
				printf ("\n\n [1] - ATUALIZAR --- \n");
				printf (" [2] - RETORNAR --- \n");
				scanf ("%d", &cmdo); //Lê uma opção entre Atualizar ou Retornar
		
				if (cmdo == 1){
					printf ("\n\n [1] - Alterar Quantidade\n");
					printf (" [2] - Alterar Valor\n");
					scanf ("%d", &cod_altera);
					if (cod_altera == 1){
					quant_refri = altera_quantidade (quant_refri); //Chamada da Função de Alterar Quantidade
					}else {
					valor_refri = altera_valor (valor_refri); //Chamada da Função de Alterar Valor
					}
				}
			}while (cmdo == 1);
				break;
			case 04:
				return 0;
				break;			
		};
	}while (cod_iten != 4);
	return 0;
}

//Função que altera a quantidade
int altera_quantidade (){
	int nova_quantidade;
	printf ("\n Nova Quantidade: ");
	scanf ("%d", &nova_quantidade);
	return nova_quantidade;
}


//Função que altera o valor
float altera_valor (float valor){
	float novo_valor;
	printf ("\n Novo Valor em R$: ");
	scanf ("%f", &novo_valor);
	return novo_valor;
}

//Função que Apresenta o Menu
int menu_itens(int *cod_iten){
	system ("cls"); //Limpa a tela
	texto_login();
	printf (" ---- MERCADO ADMINISTRADOR ---- \n");
	printf (" [1] - Arroz Branco\n");
	printf (" [2] - Feijao Preto\n");
	printf (" [3] - Refrigerante\n");
	printf (" [4] - Sair\n");
	printf (" Selecione o Produto: ");
	scanf ("%d", &*cod_iten); //Lê uma opção de produto
};

//Função de compra cliente
void compra_cliente(){
    int numero_prod;
    int quantidade_produto;
    float valor_arroz = 4.99;
    float total_arroz;
    float valor_feijao = 3.99;
    float total_feijao;
    float valor_refri = 6.99;
    float total_refri;
    float valor_total;
   
   
    printf("\n\n ---- CENTRAL DE COMPRAS ----");
    printf ("\n [1] - Arroz Branco\n");
	printf (" [2] - Feijao Preto\n");
	printf (" [3] - Refrigerante\n");
	printf (" [4] - Sair\n");
	printf("Selecione o produto que deseja comprar ou digite 4 para sair: ");
	scanf("%d", &numero_prod);
	
	switch(numero_prod){
	    
	 case 1:
	 texto_login();
	 printf("Informe a quantidade: ");
	 scanf("%d", &quantidade_produto);
	 total_arroz = quantidade_produto * valor_arroz;
	     valor_total = total_refri + total_feijao + total_arroz;
	     printf("Valor total: %fR$", total_arroz);
	 
	 break;
	 
	 case 2:
	 texto_login();
	 printf("Informe a quantidade: ");
	 scanf("%d", &quantidade_produto);
	     total_feijao = quantidade_produto * valor_feijao;
	     printf("Valor total: %fR$", total_feijao);
	 
	 break;
	 
	 case 3:
	 texto_login();
	 printf("Informe a quantidade: ");
	 scanf("%d", &quantidade_produto);
	 total_refri = quantidade_produto * valor_refri;
	     valor_total = total_refri + total_feijao + total_arroz;
	     printf("Valor total: %fR$", total_refri);
	     
	 
	 break;
	 
	 case 4: 
	 printf("\n---- PROGRAMA ENCERRADO ----");
    break;
}

return 0;
system("pause");

}
