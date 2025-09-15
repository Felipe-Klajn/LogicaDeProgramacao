#include<stdio.h>

int main()
{
	//criando a variável ponteiro para o arquivo
	FILE *pont_arq;
	char palavra[20];
	int idade = 1;
	
	//abrindo o arquivo
	pont_arq = fopen("arquivo.txt","r");
	
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso!\n");
		
		for(int i=0; i<10; i++)
		{
		fscanf (pont_arq, "%s\n", palavra);
		fscanf(pont_arq,"%d\n", &idade);
		
		printf("%s\n %d\n", palavra, idade);
		}
	}
	//fechando arquivo
	fclose(pont_arq);
	
	return(0);
}