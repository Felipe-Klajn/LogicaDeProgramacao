#include <stdio.h>
int main ()
{
	int idade = 20;
	int * p;
	p = &idade;
	
	printf("O valor de idade antes da alteracao e %d\n", idade);
	p = 25;
	printf("O valor de idade apos a alteracao feita pelo ponteiro e %d\n",p);
	return(0);
}