#include<stdio.h>

	int main(){
		
		int menu=0;
		int resposta=0;
		double result_1=0.0;
		double result_2=0.0;
		double result_3=0.0;
		double result 4=0.0;
		int quantidade=0;
		char name [20];
		
		printf("Bem vindo ao Restaurante SENAI\n");
		printf("Por favor, digite seu primeiro nome\n");
		scanf("%s",name);
		printf("Olá %s, digite abaixo a opcao do menu que deseja\n",name);
		
		do{
			
			printf("---------MENU---------\n");
			printf("|1 - X-Burguer - R$ 10.00|\n");
			printf("|2 - X-Salada -  R$ 12.00|\n");
			printf("|3 - Refrigerante Lata R$ 5.00|\n");
			printf("|4 - Suco Natural R$ 7.00|\n");
						
			scanf("%d",&menu);
			
			switch(menu){
				case 1:
				printf("Informe a quantidade de X-Burguer que deseja");
				scanf("%d",&quantidade);
				result_1=quantidade*10;
				break;
				
				case 2:
				printf("Informe a quantidade de X-Salada que deseja");
				scanf("%d",&quantidade);
				result_2=quantidade*12;
				break;
				
				case 3:
				printf("Informe a quantidade de Refrigerante Lata que deseja");
				scanf("%d",&quantidade);
				result_3=quantidade*5;
				break;
				
				case 4:
				printf("Informe a quantidade de Suco Natural que deseja");
				scanf("%d",&quantidade);
				result_4=quantidade*7;
				break;
				
				default:
				printf("Codigo invalido\n");
			}
			
			printf("Deseja algo a mais? Tecle 1 para Sim e 2 para Não");
			scanf("%d",&resposta);
			
		}while(resposta==1);
		
		total=result_1+result_2+result_3+result_4;
		
		printf("Total do pedido: R$ %.2f\n", total);
		printf("Obrigado pela compra!\n");
				
		
		
		return(0);
	}