#include <stdio.h>

double raiz_quadrada(double n) {
    double x = n;
    double y = 1;
    double e = 0.000001;

    if (n < 0) return -1;

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    double A = 0.0;
	double B = 0.0;
	double C = 0.0;
	double delta = 0.0;
	double R1 = 0.0;
	double R2 = 0.0;

    scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

    delta = B * B - 4 * A * C;

   if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        double raiz = raiz_quadrada(delta);
        R1 = (-B + raiz) / (2 * A);
        R2 = (-B - raiz) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}