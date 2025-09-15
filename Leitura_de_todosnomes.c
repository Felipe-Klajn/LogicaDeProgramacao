#include<stdio.h>

int main()
{
	//criando a variável ponteiro para o arquivo
	FILE *pont_arq;
	char palavra[20];
	int idade = 0;
	
	//abrindo o arquivo
	pont_arq = fopen("arquivo.txt","r");
	
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso!\n");
		
		while(fscanf(pont_arq,"%s\n %d\n",palavra,&idade) != EOF)
		{
			printf("%s\n %d\n", palavra, idade);
		}
	}
	//fechando arquivo
	fclose(pont_arq);
	
	return(0);
}