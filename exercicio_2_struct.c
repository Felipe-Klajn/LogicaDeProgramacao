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
	
	printf("Digite o nome do primeiro aluno\n");
	scanf("%[^\n]",turma[0].nome);
	printf("Digite a idade do primeiro aluno\n");
	scanf("%d",&turma[0].idade);
	printf("Digite a nota do primeiro aluno\n");
	scanf("%f",&turma[0].nota);
	printf("Digite o nome do segundo aluno\n");
	scanf(" %[^\n]",turma[1].nome);
	printf("Digite a idade do segundo aluno\n");
	scanf("%d",&turma[1].idade);
	printf("Digite a nota do segundo aluno\n");
	scanf("%f",&turma[1].nota);
	printf("Digite o nome do terceiro aluno\n");
	scanf(" %[^\n]",turma[2].nome);
	printf("Digite a idade do terceiro aluno\n");
	scanf("%d",&turma[2].idade);
	printf("Digite a nota do terceiro aluno\n");
	scanf("%f",&turma[2].nota);
	printf("Digite o nome do quarto aluno\n");
	scanf(" %[^\n]",turma[3].nome);
	printf("Digite a idade do quarto aluno\n");
	scanf("%d",&turma[3].idade);
	printf("Digite a nota do quarto aluno\n");
	scanf("%f",&turma[3].nota);
	printf("Digite o nome do quinto aluno\n");
	scanf(" %[^\n]",turma[4].nome);
	printf("Digite a idade do quinto aluno\n");
	scanf("%d",&turma[4].idade);
	printf("Digite a nota do quinto aluno\n");
	scanf("%f",&turma[4].nota);
	
	return(0);
}
	