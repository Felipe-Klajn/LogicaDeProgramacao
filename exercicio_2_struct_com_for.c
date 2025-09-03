#include <stdio.h>
struct aluno
{
	char nome[50];
	int idade;
	float nota;
};

int main()
{
	struct aluno turma[5];
	for (int i=0; i<5; i++){
	
	printf("Digite o nome do primeiro aluno\n");
	scanf("%[^\n]",turma[i].nome);
	printf("Digite a idade do primeiro aluno\n");
	scanf("%d",&turma[i].idade);
	printf("Digite a nota do primeiro aluno\n");
	scanf("%f",&turma[i].nota);
	}
	
	for (int i=0; i<5; i++){
		printf("%s\n",turma[i].nome);
		printf("%d\n",turma[i].idade);
		printf("%d\n",turma[i].nota);
	}
	return(0);
}
	