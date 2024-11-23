#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> //biblioteca de comunicações de texto por região
#include <string.h> //biblioteca responsavel por cuidar das string

int registro()// função responsavel por cadastrar os usuarios no sistema
{
	//inicio criação de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variaveis/string
	
	printf("Digite o CPF a ser cadastrado:");//colentando informações do usuario
	scanf ("%s",cpf);// % refere-se a string
	
	strcpy(arquivo, cpf);//responsavel por copiar os valores das string
	
	FILE *file;//cria arquivo
	file = fopen(arquivo,"w");//cria o arquivo e o"w" significa escrever
	fprintf(file,cpf);//salvo o valor da variavel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo,"a"),
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado:");//colentando informações do usuario
	scanf("%s",nome);	
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a"),
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");//colentando informações do usuario
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a"),
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser castrado:");//colentando informações do usuario
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}
int consulta()
{
	setlocale(LC_ALL, "Portuguese");//definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");//colentando informações do usuario
	scanf("%s", cpf);
	
	FILE*file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localizado!\n\n");
	}
	
	while(fgets(conteudo,200,file)!=NULL)
	{
	printf("\nEssas são as informações do usuario: ");
	printf("%s", conteudo);
	printf("\n\n\n");
		
	}
	
	system("pause");	
}
int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");//colentando informações do usuario
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file== NULL);
	{
		printf("O usuario não se encontra no sistema!\n");
		system("pause");
	}
		
}
int main()//menu
{
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");//responsavel por limpa a tela
			
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
		printf("### Cartório da EBAC ###\n\n");//inicio do menu		
		printf("Escolha a opção desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar   nomes\n\n");
		printf("Opção:");//fim do menu
	
		scanf("%d", &opcao);//armazenando a escolha do usuario
	
		system("cls");//responsavel por limpa a tela
	
	
		switch(opcao)//inicio da seleção do menu
		{
			case 1:
			registro();//chamado de funções
			break;
			
			case 2:
			consulta();//chamado de funções
			break;
			
			case 3:
			deletar();//chamado de funções
			break;
			
			default:
			printf("Essa opção não está disponivel!\n\n");
			system("pause");
			break;
		}//fim da seleção
    } 
		
}
		
		
		
		
		
		
		
		
		
		
		
		
	


