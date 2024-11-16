#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro(){
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:\n");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:\n");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:\n");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:\n");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");

}

int consulta(){
	setlocale (LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:\n");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Essas s�o as informa��es do usu�rio:\n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar(){
	setlocale (LC_ALL, "Portuguese");
	
	char cpf[40];
	
	printf("Digite o CPF a ser deletado:\n\n");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL);
	{
		printf("\n Cadastro deletado com sucesso! \n");
		system("pause");
	}
	
}

int main (){
	int opcao=0;
	int x=1;	
	
	for(x=1;x=1;)
	{
	
	system("cls");
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("## Cart�rio EBAC##\n\n\n");
	printf ("# MENU - Escolha a op��o desejada:\n\n");
	printf ("\t1 - Registrar Nome\n"); 
	printf ("\t2 - Consultar Nome\n"); 
	printf ("\t3 - Deletar Cadastro\n\n\n");
	printf ("\t4 - Sair do Sistema!\n\n");
	printf ("Op��o: ");
	
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf ("Obrigado, at� a pr�xima!\n");
		return 0;
		break;
				
		default:
		printf("Esta op��o n�o est� dispon�vel!\n");
		system("pause");
		break;
		
	}

}	
}
