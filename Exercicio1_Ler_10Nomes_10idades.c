#include<stdio.h>

int main()
{
	//criando a variável ponteiro para o arquivo
	FILE *pont_arq;
	char palavra[20];
	int idade = 1;
	
	//abrindo o arquivo
	pont_arq = fopen("arquivo.txt","a");
	
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso!\n");
		
		for(int i=0; i<10; i++)
		{
		
		printf("Escreva uma palavra para testar gravacao de arquivo:\n", i+1);
		scanf("%s", palavra);
		printf("Coloque a idade:\n");
		scanf("%d",&idade);
		
		//usando fprintf para armazenar a string no arquivo
		
		
		fprintf (pont_arq, "%s\n", palavra);
		fprintf(pont_arq,"%d\n", idade);
		}
	}