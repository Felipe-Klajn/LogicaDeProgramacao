#include <stdio.h>
struct livro
{
	char titulo[50];
	char autor[50];
	float preco;
};

int main()
{
	struct livro A1;
	printf("Informe o nome do livro\n");
	scanf("%[^\n]", A1.titulo);
	printf("Informe o nome do autor\n");
	scanf(" %[^\n]",A1.autor);
	printf("Informe o preco\n");
	scanf("%f",&A1.preco);
	printf("Resumo do pedido\n");
	printf("%s\n",A1.titulo);
	printf("%s\n",A1.autor);
	printf("%.2f\n",A1.preco);
	
	return (0);
}