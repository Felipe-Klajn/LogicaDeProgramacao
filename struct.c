#include <stdio.h>

struct Aluno
{
	char nome[50];
	int idade;
	float nota;
};

int main()
{
	struct Aluno A1;
	
	printf ("Informe o seu nome\n");
	scanf("%s", A1.nome);
	printf("Informe sua idade\n");
	scanf("%d",&A1.idade);
	printf("Informe sua nota\n");
	scanf("%f",&A1.nota);
	
	return(0);
	
}