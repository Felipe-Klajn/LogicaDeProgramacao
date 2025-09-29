#include <stdio.h>
#define TAMANHO 5

void ordenar_crescente(int vetor[], int tamanho);
void ordenar_decrescente (int vetor[], int tamanho);
void imprimir_vetor (int vetor[], int tamanho);

int main(){
	int vetor [TAMANHO];
	int i;
	
	printf("Digite %d numeros: \n", TAMANHO);
	for (i=0; i<TAMANHO; i++){
		printf("posicao %d: \n", i+1);
		scanf("%d", &vetor[i]);
	}
	
	ordenar_crescente(vetor, TAMANHO);
	printf("Vetor em ordem crescente: \n");
	imprimir_vetor (vetor, TAMANHO);
	
	ordenar_decrescente(vetor, TAMANHO);
	printf("Vetor em ordem decrescente: \n");
	imprimir_vetor (vetor, TAMANHO);
	
	return(0);
}
	void ordenar_crescente (int vetor[], int tamanho){
		int i=0;
		int a=0;
		int aux=0;
		for(a=0; i < tamanho -1; i++){
			for (a=0; a < tamanho - 1 - i; a++){
				if(vetor[a] > vetor [a+1]){
					aux = vetor[a];
					vetor[a] = vetor [a+1];
					vetor[a+1] = aux;
				}
			}
		}
	}
	
	void ordenar_decrescente (int vetor[], int tamanho){
		int i=0;
		int a=0;
		int aux=0;
		for (a=0; i < tamanho -1; i++){
			for (a=0; a < tamanho - 1 - i; a++){
				if(vetor[a] < vetor [a+1]){
					aux = vetor[a];
					vetor[a] = vetor [a+1];
					vetor [a+1] = aux;
				}
			}
		}
	}
	
	void imprimir_vetor(int vetor[], int tamanho){
		int i=0;
		for (i=0; i < tamanho; i++){
			printf("%d ", vetor [i]);
		}
		printf ("\n");
	}
