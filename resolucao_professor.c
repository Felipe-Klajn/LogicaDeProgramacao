#include <stdio.h>

void BubbleSort(char * vet, int tam);

int main()
{
int tamanho = 0;
int tempo = 0;
char palavra_um[20];
char palavra_dois[20];

for (int i=0; i< tamanho; i++)
{
	printf ("Informe o valor inteiro: ");
	scanf(" %c", &vetor[i]);
	printf("\n");
}

printf ("Vetor original\n");
for (int i = 0; i< tamanho; i++)
{
	printf("Vetor [%d] = %c\n", i, vetor [i]);
}

Bubble Sort(vetor, tamanho);
printf("Vetor ordenado\n");
for (int i = 0; i< tamanho; i++)
{
	printf("vetor[%d] = %c\n", i, vetor[i]);
}
return 0;

