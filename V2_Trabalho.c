#include <stdio.h>

double SOMA(double a, double b);
double SUBTRACAO(double a, double b);
double MULTIPLICACAO(double a, double b);
double DIVISAO(double a, double b);
int POTENCIACAO(int base, int expoente);
int MDC(int a, int b);
int MMC(int a, int b);
double RAIZ_QUADRADA(double a);
int FATORIAL_SIMPLES(int a);
int FATORIAL_DUPLO(int a);
void EQUACAO_SEGUNDO_GRAU(double a, double b, double c);

int main() {
    int opcao = 0;

    do {
        printf("----------------------------------\n");
        printf("| Bem vindo a Calculadora 1.0    |\n");
        printf("| Escolha uma opcao              |\n");
        printf("----------------------------------\n");
        printf("|0 - MDC                         |\n");
        printf("|1 - MMC                         |\n");
        printf("|2 - Soma                        |\n");
        printf("|3 - Sair                        |\n");
        printf("|4 - Divisao                     |\n");
        printf("|5 - Subtracao                   |\n");
        printf("|6 - Potenciacao                 |\n");
        printf("|7 - Multiplicacao               |\n");
        printf("|8 - Raiz Quadrada               |\n");
        printf("|9 - Fatorial Duplo (N!!)        |\n");
        printf("|10 - Fatorial Simples (N!)      |\n");
        printf("|11 - Equacao do Segundo Grau    |\n");
        printf("----------------------------------\n");

        scanf("%d", &opcao);

        int x = 0;
		int y = 0;
		int z = 0;
		double x1 = 0.0;
		double y1 = 0.0;
		double z1 = 0.0;
		double result = 0.0;

        switch (opcao) {
            case 0:
                printf("Digite dois inteiros:\n");
                scanf("%d %d", &x, &y);
                printf("O MDC de %d e %d e %d\n", x, y, MDC(x, y));
                break;

            case 1:
                printf("Digite dois inteiros:\n");
                scanf("%d %d", &x, &y);
                printf("O MMC de %d e %d e %d\n", x, y, MMC(x, y));
                break;

            case 2:
                printf("Digite dois numeros reais:\n");
                scanf("%lf %lf", &x1, &y1);
                printf("A soma = %.5lf\n", SOMA(x1, y1));
                break;

            case 4:
                printf("Digite dois numeros reais:\n");
                scanf("%lf %lf", &x1, &y1);
                if (y1 == 0)
                    printf("Nao e possivel dividir por zero!\n");
                else
                    printf("A divisao = %.5lf\n", DIVISAO(x1, y1));
                break;

            case 5:
                printf("Digite dois numeros reais:\n");
                scanf("%lf %lf", &x1, &y1);
                printf("A subtracao = %.5lf\n", SUBTRACAO(x1, y1));
                break;

            case 6:
                printf("Digite base e expoente inteiros:\n");
                scanf("%d %d", &x, &y);
                printf("%d^%d = %d\n", x, y, POTENCIACAO(x, y));
                break;

            case 7:
                printf("Digite dois numeros reais:\n");
                scanf("%lf %lf", &x1, &y1);
                printf("A multiplicacao = %.5lf\n", MULTIPLICACAO(x1, y1));
                break;

            case 8:
                printf("Digite um numero real:\n");
                scanf("%lf", &x1);
                result = RAIZ_QUADRADA(x1);
                if (result != -1)
                    printf("Raiz aproximada = %.5lf\n", result);
                break;

            case 9:
                printf("Digite um inteiro:\n");
                scanf("%d", &x);
                result = FATORIAL_DUPLO(x);
                if (result != -1)
                    printf("%d!! = %.0lf\n", x, result);
                break;

            case 10:
                printf("Digite um inteiro:\n");
                scanf("%d", &x);
                result = FATORIAL_SIMPLES(x);
                if (result != -1)
                    printf("%d! = %.0lf\n", x, result);
                break;

            case 11:
                printf("Digite os coeficientes a, b e c:\n");
                scanf("%lf %lf %lf", &x1, &y1, &z1);
                EQUACAO_SEGUNDO_GRAU(x1, y1, z1);
                break;

            case 3:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    return 0;
}


double SOMA (double a, double b){
			double result = 0.0;
			result = a+b;
			return(result);
		}
		
double SUBTRACAO(double a, double b){
			double result = 0.0;
			result = a-b;
			return(result);
		}
		
double MULTIPLICACAO(double a, double b){
			double result = 0.0;
			result = a*b;
			return(result);
}	
double DIVISAO (double a, double b){
			double result = 0.0;
			result = a/b;
			return(result);
		}

int POTENCIACAO(int base, int expoente) {
    int result = 1;
    for (int i = 0; i < expoente; i++) 
	{
		result *= base;
    }
	return result;
}

int MDC(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int MMC(int a, int b) {
    return (a * b) / MDC(a, b);
}

double RAIZ_QUADRADA(double a) {
    if (a < 0) {
        printf("Nao existe raiz quadrada de numero negativo!\n");
        return -1;
    }
    double chute = a / 2.0;
for (int i = 0; i < 100; i++){
        chute = 0.5 * (chute + (a / chute));
}
    return chute;
}

int FATORIAL_SIMPLES(int a) {
    if (a < 0) {
        printf("Nao existe fatorial simples de numero negativo!\n");
        return -1;
    }
    int result = 1;
    for (int i = 1; i <= a; i++) result *= i;
    return result;
}

int FATORIAL_DUPLO(int a) {
    if (a < 0) {
        printf("Nao existe fatorial duplo de numero negativo!\n");
        return -1;
    }
    int result = 1;
    if (a % 2 == 0) {
        for (int i = 2; i <= a; i += 2) result *= i;
    } else {
        for (int i = 1; i <= a; i += 2) result *= i;
    }
    return result;
}

void EQUACAO_SEGUNDO_GRAU(double a, double b, double c) {
    if (a == 0) {
        printf("Nao e equacao de segundo grau!\n");
        return;
    }
    double delta = (b * b) - (4 * a * c);
    printf("Delta = %.2lf\n", delta);

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Raiz unica: x = %.5lf\n", x);
    } else {
        double raizDelta = RAIZ_QUADRADA(delta);
        double x1 = (-b + raizDelta) / (2 * a);
        double x2 = (-b - raizDelta) / (2 * a);
        printf("Raizes: x1 = %.5lf, x2 = %.5lf\n", x1, x2);
    }
}