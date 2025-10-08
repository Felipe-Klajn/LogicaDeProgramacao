#include <stdio.h>

double raiz_quadrada(double n) {
    double x = n;
    double y = 0;
    double e = 0.000001;

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    double x1, y1, x2, y2, distancia, dx, dy;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    distancia = raiz_quadrada(dx * dx + dy * dy);

    printf("%.4lf\n", distancia);

    return 0;
}