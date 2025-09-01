#include <stdio.h>

int main ()
{
	int numero = 50;
	int * ptr;
	ptr = &numero;
	
	printf("O valor da variavel numero e %d\n",numero);
	printf("O endereco de memoria de numero e %x\n",& numero);
	printf("O valor armazenado no ponteiro e %d\n", *ptr);
	printf("O conteudo apontado por ptr e %x\n", *ptr);
	
	return(0);
}
	
	