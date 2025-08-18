#include<stdio.h>

double SOMA(double a, double b);
double SUBTRACAO(double a, double b);
double MULTIPLICACAO (double a, double b);
double DIVISAO (double a, double b);
double POTENCIACAO (double base, int expoente);

int main()
{
	double result=0.0;
	int opcao = 0;
	double a = 0.0;
	double b = 0.0;
	int expoente=0;
	int e =0;
	double base=0.0;
	
	do{
		printf("Escolha uma opcao abaixo\n");
		printf("------------------------\n");
		printf("|1 - Soma               |\n");
		printf("|2 - Subtracao          |\n");
		printf("|3 - Multiplicacao      |\n");
		printf("|4 - Divisao            |\n");
		printf("|5 - Potenciacao        |\n");
		printf("|6 - Sair               |\n");
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
			case 5:
				printf("Informe o numero base:\n");
				scanf("%lf",&a);
				printf("Informe o numero correspondente ao expoente:\n");
				scanf("%d",&e);
				result=POTENCIACAO(a,e);
				printf("O resultado e: %.2lf\n",result);
		}
		
	}while(opcao != 6);

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

double POTENCIACAO (double base, int expoente)
{
	double result=1.0;
	for (int i=0; i<expoente; i++){
		result *= base;
	}
return(result);
}
