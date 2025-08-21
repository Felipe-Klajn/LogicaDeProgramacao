#include<stdio.h>

double SOMA(double a, double b);
double SUBTRACAO(double a, double b);
double MULTIPLICACAO(double a, double b);
double DIVISAO(double a, double b);
int POTENCIACAO (int base, int expoente);
int MDC(int a, int b);
int MMC(int a, int b);
int RAIZ_QUADRADA (int a);
int FATORIAL_SIMPLES(int a);
int FATORIAL_DUPLO(int a);
void EQUACAO_SEGUNDO_GRAU(double a, double b, double c);


int main()
{
	int opcao=0;
	
do{
	printf("----------------------------------\n");
	printf("|Bem vindo a Calculadora 1.0.....|\n");
	printf("|Escolha uma opcao...............|\n");
	printf("----------------------------------\n");
	printf("|0 - MDC-------------------------|\n");
	printf("|1 - MMC-------------------------|\n");
	printf("|2 - Soma------------------------|\n");
	printf("|3 - Sair------------------------|\n");
	printf("|4 - Divisao---------------------|\n");
	printf("|5 - Subtracao-------------------|\n");
	printf("|6 - Potenciacao-----------------|\n");
	printf("|7 - Multiplicacao---------------|\n");
	printf("|8 - Raiz Quadrada---------------|\n");
	printf("|9 - Fatorial Duplo (N!!)--------|\n");
	printf("|10 - Fatorial Simples (N!)------|\n");
	printf("|11 - Equacao do Segundo Grau----|\n");
	printf("----------------------------------\n");
	
	scanf("%d",&opcao);
	
	switch(opcao){
		case 0:
			int a=0;
			int b=0;
			printf("Por favor, digite dois numeros inteiros:\n");
			scanf("%d",&a);
			scanf("%d",&b);
			printf("O MDC de %d e %d e %d\n", a, b, MDC(a,b));
			break;
			
		case 1:
			int a=0;
			int b=0;
			printf("Por favor, digite dois numeros inteiros:\n");
			scanf("%d",&a);
			scanf("%d",&b);
			printf("O MMC de %d e %d e %d\n", a, b, MMC(a,b));
			
		case 2:
			double a=0.0;
			double b=0.0;
			printf("Por favor, digite dois numeros quaisquer:\n");
			scanf("%lf",&a);
			scanf(%lf,&b);
			printf("A soma de %lf e %lf e %.5lf, a, b, SOMA(a,b);
			break;
			
		case 4:
			double a=0.0;
			double b=0.0;
			printf("Por favor, digite dois numeros quaisquer:\n");
			scanf("%lf",&a);
			scanf("%lf",&b);
			if(b==0){
				printf("Nao e possivel dividir por zero!\n");
			}
			else{
				printf("A divisao entre %lf e %lf e %.5lf", a, b, DIVISAO (a,b);
			}
			break;
		
		case 5:
			double a=0.0;
			double b=0.0;
			printf("Por favor, digite dois numeros quaisquer:\n");
			scanf("%lf",&a);
			scanf("%lf",&b);
			printf("A subtracao entre %lf e %lf e %.5lf\n", a, b, SUBTRACAO(a,b);
			break;
			
		case 6:
			int a=0;
			int b=0;
			printf("Por favor, digite o valor da base e o do expoente:\n");
			scanf("%d",&a);
			scanf("%d",&b);
			printf("O valor de %d na potencia %d e %d", a, b, POTENCIACAO(a,b);
			break;
			
		case 7:
			double a=0.0;
			double b=0.0;
			printf("Por favor, digite o valor de dois numeros quaisquer:\n");
			scanf("%lf",&a);
			scanf("%lf",&b);
			printf("A multiplicacao entre %lf e %lf e %.5lf", a, b, MULTIPLICACAO(a,b);
			break;
			
		case 8:
			int a=0;
			printf("Digite um numero qualquer\n");
			scanf("%d",&a);
			int result = RAIZ_QUADRADA(a);
			if(result != -1){ 
				printf("Raiz aproximada e: %d\n",result);}
			break;
			
		case 9:
			int a=0;
			printf("Digite um numero qualquer\n");
			scanf("%d",&a);
			int result = FATORIAL_DUPLO(a);
			if(result != -1){
			printf("O fatorial duplo de %d e %d\n",a,result);}
			break;
			
		case 10:
			int a=0;
			printf("Digite um numero qualquer\n");
			scanf("%d",&a);
			int result = FATORIAL_SIMPLES(a);
			if(result != -1){
			printf("O fatorial simples de %d e %d\n",a,result);}
			break;
			
		case 11:
			double a=0;
			double b=0;
			double c=0;
			printf("digite os valores de a, b e c\n");
			scanf("%d",&a);
			scanf("%d",&b);
			scanf("%d",&c);
			double result = EQUACAO_SEGUNDO_GRAU(a,b,c);
			if(result != -1){
				printf("O resultado da equacao de segundo grau com os valores de %d, %d e %d e %d\n",a,b,c,result);
				
		case 3:
			printf("Sair\n");
			break;
		default:
			printf("Opcao invalida\n");
		
		return 0;
			}
		
		double SOMA (double a, double b){
			result = a+b;
			return(result);
		}
		
		double SUBTRACAO(double a, double b){
			result = a-b;
			return(result);
		}
		
		double MULTIPLICACAO(double a, double b){
			result = a*b;
			return(result);
		}
		
		double DIVISAO (double a, double b){
			result = a/b;
			return(result);
		}
		
		int POTENCIACAO(int base, int expoente){
			int result=1;
			for(int=0, i<expoente, i++){
				result *= base;
			}
			return(result);
		}
		
		int RAIZ_QUADRADA(int a){
			if(a<0){
				printf("Nao existe raiz quadrada de numero negativo!\n");
				return -1;
			}
			
			if(a==0){
				return 0;
			}
			
			if(a>0){
			double chute = a
			for (int i=0; i<100; i++){
				chute = 0.5*(chute+(a/chute));
			}
			}
			return(chute);
			
		int FATORIAL_SIMPLES (int a){
			if(a<0){
				printf("Nao existe fatorial simples de numero negativo!\n");
				return -1;
			}
			int result=1;
			for(int i=1; i>0; i--){
				result *=i;
			}
			return (result)
			
			int MDC(int a, int b){
				while (b != 0){
					int result = b;
					b = a % b;
					a = result;
				}
				return (a);
			}
			
			int MMC(int a, int b){
				result= (a*b)/(MDC(a,b));
				return (result);
			}
			
			void EQUACAO_SEGUNDO_GRAU (double a, double b, double c){
				if (a==0){
					printf("Nao se trata de uma equacao de segundo grau!\n");
					return;
				}
				
				int delta=POTENCIACAO(b,2)-4*a*c;
				printf("Delta = %d\n", delta);
				
				if (delta <1){
					printf("Nao existem raizes reais!\n");
				}
				else if(delta==0){
					double x = -b/(2.0*a);
					printf("Nesse caso, ha apenas uma raiz: x = %.5lf\n",x);
				else{
					double raizDelta = RAIZ_QUADRADA(delta);
					double x1 = (-b + raizDelta) / (2.0 * a);
        			double x2 = (-b - raizDelta) / (2.0 * a);
					printf("As raizes sao: x1 = %.5lf e x2 = %.5lf\n", x1, x2);
					
			int FATORIAL_DUPLO (int a){
			if(a<0){
				printf("Nao existe fatorial duplo de numero negativo!\n");
				return -1;
			
			if (a==0 || a==0){
				return 1;
			}
			
			if (a>0){
				int result = 1;
				
				}
				return (result);
			}
    }
				
				
			
			
		

