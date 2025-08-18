#include<stdio.h>

double SOMA(double a, double b);
double SUBTRACAO(double a, double b);
double MULTIPLICACAO (double a, double b);
double DIVISAO (double a, double b);

int main()
{
	double result=0.0;
	int opcao = 0;
	double a = 0.0;
	double b = 0.0;
	
	do{
		printf("Escolha uma opcao abaixo\n");
		printf("------------------------\n");
		printf("|1 - Soma               |\n");
		printf("|2 - Subtracao          |\n");
		printf("|3 - Multiplicacao      |\n");
		printf("|4 - Divisao            |\n");
		printf("|5 - Sair               |\n");
		printf("------------------------\n");
		
		scanf("%d",&opcao);

		
		switch(opcao)
		{
			case 1:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result=SOMA(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 2:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result=SUBTRACAO(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 3:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result=MULTIPLICACAO(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 4:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				if(b ==0)
				{
					printf("Nao e possivel realizar divisao por 0\n");
				}
				else
				{
					result=DIVISAO(a,b);
					printf("O resultado e: %.2lf\n",result);
				}
			break;
		}
		
	}while(opcao != 5);

	printf("Obrigado por usar minha calculadora super poderosa caseira\n");
	return(0);
}

double SOMA(double a, double b)
{
	double result=0.0;
result=a+b;
return(result);
}

double SUBTRACAO(double a, double b)
{
double result=0.0;
result=a+b;
return(result);
}

double MULTIPLICACAO (double a, double b)
{
double result=0.0;
result=a*b;
return(result);
}

double DIVISAO (double a, double b)
{
double result=0.0;
result=a/b;
return(result);
}
