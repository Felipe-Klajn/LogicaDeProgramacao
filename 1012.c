#include <stdio.h>
#define PI 3.14159
 
int main() {
 
double A=0.0;
double B=0.0;
double C=0.0;
double area_triangulo=0.0;
double area_circulo=0.0;
double area_trapezio=0.0;
double area_quadrado=0.0;
double area_retangulo=0.0;

scanf("%lf",&A);
scanf("%lf",&B);
scanf("%lf",&C);

area_triangulo=(A*C)/2.0;
area_circulo=PI*C*C;
area_trapezio=((A+B)*C)/2.0;
area_quadrado=B*B;
area_retangulo=A*B;

printf("TRIANGULO: %.3lf\n",area_triangulo);
printf("CIRCULO: %.3lf\n",area_circulo);
printf("TRAPEZIO: %.3lf\n",area_trapezio);
printf("QUADRADO: %.3lf\n",area_quadrado);
printf("RETANGULO: %.3lf\n",area_retangulo);
 
    return 0;
}