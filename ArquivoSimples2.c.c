#include<stdio.h>

int main()
{
	//criando a variável ponteiro para o arquivo
	FILE *pont_arq;
	char palavra[20];
	
	//abrindo o arquivo
	pont_arq = fopen("arquivo.txt","a");
	
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso!\n");
		printf("Escreva uma palavra para testar gravacao de arquivo:\n");
		scanf("%s", palavra);
		
		//usando fprintf para armazenar a string no arquivo
		fprintf (pont_arq, "%s\n", palavra);
	}
	
	//fechando arquivo
	fclose(pont_arq);
	
	return(0);
}